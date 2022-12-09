/* Program to perform selection sort */

#include<stdio.h>
#include<stdlib.h>

#define SWAP(x, y) (x = x+y, y = x-y, x = x-y)

int main() {
	int n, *arr, i, j;

	// Dynamically allocating the size of an array
	printf("[ QUESTION ] Enter the size of an array : ");
	scanf("%d", &n);
	arr = malloc(n*sizeof(int));


	// Accept the elements from the keyboard
	printf("[ QUESTION ] Enter the element of an array\n");
	for (i=0; i<n; i++)
		scanf("%d", &arr[i]);   
	

	// Logic Implementation (Main Part)
	for (i=0; i<n; i++) {
		int index = i;
		for (int j=i; j<n; j++)
			if (arr[index] > arr[j])
				index = j;
		
		if (index != i) 	
			SWAP(arr[i], arr[index]);
	}


	// Printing the sorted array
	printf("[ INFO ] Sorted array : ");
	for (i=0; i<n; i++)
		printf("%d ", arr[i]);


	free(arr);
	return 0;
}
