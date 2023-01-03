/* C program to perform polynominal addition */

#include<stdio.h>
#include<stdlib.h>

#define MAX_TERMS 100

#define COMPARE(x, y) ((x==y)? 0 : (x>y)? 1 : -1)

typedef struct {
	float coeff;
	int exp;
} polynomial;

polynomial terms[MAX_TERMS];
int avail = 0;

void attach(float coeff, int exp) {
	if (avail >= MAX_TERMS) {
		printf("Memory Insufficient Error\n");
		exit(-1);
	}
	terms[avail].coeff = coeff;
	terms[avail].exp = exp;
	avail++;
}


void pAdd(int startA, int endA, int startB, int endB, int *startD, int *endD) {
	float coeff;
	*startD = avail;

	while(startA <= endA && startB <= endB)
		switch(COMPARE(terms[startA].exp, terms[startB].exp)) {
			case -1 : 
				attach(terms[startB].coeff, terms[startB].exp);
				startB++;
				break;
			case 0 : 
				coeff = terms[startA].coeff + terms[startB].coeff;
				if (coeff)
					attach(coeff, terms[startA].exp);
				startA++, startB++;
				break;
			case 1 :
				attach(terms[startA].coeff, terms[startA].exp);
				startA++;
				break;

		}

	while(startA <= endA)
		attach(terms[startA].coeff, terms[startA].exp), startA++;

	while(startB <= endB)
		attach(terms[startB].coeff, terms[startB].exp), startB++;

	*endD = avail-1;
}


int main() {
	int n1, n2, i, j;
	printf("Enter number of terms in poly A\n");
	scanf("%d", &n1);
	
	printf("Enter number of terms in poly B\n");
	scanf("%d", &n2);
	
	printf("\nEnter polynonmial A\n");
	for (i=0; i<n1; i++) {
		printf("coefficient = ");
		scanf("%f", &terms[i].coeff);
		printf("exp = ");
		scanf("%d", &terms[i].exp);
	}
	
	printf("\nEnter polynonmial B\n");
	for (j=i; i<n1+n2; i++) {
		printf("coefficient = ");
		scanf("%f", &terms[j].coeff);
		printf("exp = ");
		scanf("%d", &terms[j].exp);
	}
	
	int start, end;
	pAdd(0, n1-1, n1, (n1+n2)-1, &start, &end);
	
	printf("Addition = ");
	for (int i=start; i<=end; i++)
		printf("%fx(^%d) + ", terms[i].coeff, terms[i].exp);
	printf("\b\b\b\b\b\b\b");
	printf("\n");
}

