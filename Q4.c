/*
4.Declare two arrays of integers. Merge the two arrays. [Hint: Size of the arrays to be merged declared accordingly]
*/
#include<stdio.h>
#include"function.h"
int main() {

	int arr1[3];
	int arr2[3];
	int merged[6];
	int n = 3;

	int totalSize = n+n;
	printf("\nFirst Array : ");
	acceptInt(&arr1,n);
	printf("\nSecond Array : ");
	acceptInt(&arr2, n);

	merge(&arr1,&arr2,n,&merged,totalSize);

	displayInt(&merged,totalSize);


	return 0;
}