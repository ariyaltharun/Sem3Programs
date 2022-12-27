/* Sparse Matrix */

#include<stdio.h>

typedef struct {
	int row;
	int col;
	int val;
}term;	

term a[] = {
	    {6, 6, 6}, 
	    {0, 0, 78}, 
	    {1, 4, 23}, 
	    {2, 3, 56}, 
	    {3, 1, 89}, 
	    {4, 5, 95}, 
	    {5, 3, 12}
	    };
term b[100];


void transpose() {
	int n, i, j, currentb;
	n = a[0].val;
	b[0].row = a[0].col;
	b[0].col = a[0].row;
	b[0].val = n;

	if (n>0) {
		currentb = 1;
		for (i=0; i<=a[0].col; i++)
			for (j=1; j<=n; j++)
				if (a[j].col == i) {
					b[currentb].row = a[j].col;
					b[currentb].col = a[j].row;
					b[currentb++].val = a[j].val;
				}
	}
}


int main() {
	
	printf("TRANPOSE OF A SPARSE MATRIX\n");	
	transpose();
	
	printf("      ROW   COL   VAL\n");
	for (int i=0; i<=6; i++)
		
	printf("      ROW   COL   VAL\n");
	for (int i=0; i<=6; i++) 
		printf("b[%d]  %d    %d    %d\t\n", i, b[i].row, b[i].col, b[i].val);

	return 0;
}
