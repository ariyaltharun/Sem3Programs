/* C program to perform fast transpose using sparse matrix */

#include<stdio.h>

#define MAX_COL 50

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



void fast_tranpose() {
	int row_terms[MAX_COL], starting_pos[MAX_COL];
	int i, j, num_cols = a[0].col, num_terms = a[0].val;
	b[0].row = num_cols;
	b[0].col = a[0].row;
	b[0].val = a[0].val;
	
	if (num_terms > 0) {
		for (i=0; i<num_cols; i++)
			row_terms[i] = 0;
		
		for (i=1; i<=num_terms; i++)
			row_terms[a[i].col]++;

		starting_pos[0] = 1;
		for (i=1; i<num_cols; i++)
			starting_pos[i] = starting_pos[i-1] + row_terms[i-1];
		
		for (i=1; i<=num_terms; i++) {
			j = starting_pos[a[i].col]++;
			b[j].row = a[i].col;
			b[j].col = a[i].row;
			b[j].val = a[i].val;
		}
	}
}


int main() {
	printf("\nTRANSPOSE OF A SPARSE MATRIX USING FAST TRANSPOSE METHOD\n");
	
	printf("\nGiven matrix : \n");
	printf("      ROW   COL   VAL\n");
	for (int i=0; i<=a[0].val; i++)
		printf("a[%d]  %d    %d    %d\t\n", i, a[i].row, a[i].col, a[i].val);
	printf("\n\n");
	
	fast_tranpose();
	printf("Transpose of a given sparse matrix : \n");
	printf("      ROW   COL   VAL\n");
	for (int i=0; i<=a[0].val; i++)
		printf("b[%d]  %d    %d    %d\t\n", i, b[i].row, b[i].col, b[i].val);
	return 0;
}



