/*
2.5 integers in an array are given. Reverse the contents of the array.
*/

#include<stdio.h>
#include "function.h"

int main() {
	int arr[5];
	int n = 5;
	acceptInt(&arr,n);
	revers(&arr,n);

	displayInt(&arr, n);
	return 0;
}