/* Program to implement recursive binary search using macros */

#include<stdio.h>
#include<stdlib.h>

#define COMPARE(x, y) ((x==y)? 0 : (x>y)? 1 : -1 )


int binarySearch(int *list, int key, int first, int last) {
	int mid = (first + last) / 2;

	switch (COMPARE(list[mid], key)) {
			case -1 : return binarySearch(list, key, first + 1, last);
			case 0 : return mid;
			case 1 : return binarySearch(list, key, first, last-1);
			}
}



int main() {
	int n, *arr, key;
	
	printf("[ QUESTION ] Enter the number of elements : ");
	scanf("%d", &n);

	// Dynamic Memory Allocation for arrays
	arr = malloc(n*sizeof(int));
	
	// Accept the elements
	printf("[ QUESTION ] Enter the elements in sorted fashion\n");
	for (int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	// Accepting the key element to search
	printf("[ QUESTION ] Enter the element to search : ");
	scanf("%d", &key);

	
	int index = binarySearch(arr, key, 0, n);

	printf("[ INFO ] Element found at %d\n[ INFO ]Element = %d\n", index+1, arr[index]);

	free(arr);
	return 0;
}
