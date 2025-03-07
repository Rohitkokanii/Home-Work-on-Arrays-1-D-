/*
1 .Accept 5 numbers in an array. Find the maximum number in the array.
*/

#include<stdio.h>
#include "function.h"

int main() {
	int arr[5];
	int n = 5;

	acceptInt(&arr,n);
	displayInt(&arr, n);

	findMax(arr, n);
	return 0;
}