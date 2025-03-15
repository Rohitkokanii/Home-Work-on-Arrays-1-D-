/*
3.Array of 10 integers is given. 5 integers are initialized. Insert an element in an array at a given position.
*/

#include<stdio.h>
#include "function.h"

int main() {

	int arr[10] = {1,2,3,4,5};
	int idx;
	int value;

	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("\nEnter the Index : ");
	scanf_s("%d",&idx);

	printf("\n\nEnter the Value : ");
	scanf_s("%d",&value);
	arr[idx] = value;

	printf("\n\n");
	for (int i = 0; i < 10;i++) {
		printf("%d ",arr[i]);
	}

	printf("\n\n");

	return 0;
}