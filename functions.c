#include<stdio.h>

void acceptInt(int* arr, int n) {
	printf("\nEnter Array : ");
	for (int i = 0; i < n;i++) {
		scanf_s("%d",arr+i);
	}
}

void displayInt(int* arr, int n) {
	printf("\nArray : ");
	for (int i = 0; i < n;i++) {
		printf("%d ", *(arr + i));
	}

}

void findMax(int* arr, int n) {
	
	int max = 0;

	for (int i = 0; i < n;i++) {
		if (*(arr + i) > max) {
			max = *(arr + i);
		}
	}
	printf("\nMax : %d",max);
}

//Q2

void revers(int *arr,int n) {

	for (int i = 0; i < n/2; i++) {
		int temp = *(arr + i);
		*(arr + i) = *((arr + (n - 1) - i));
		*((arr + (n - 1) - i)) = temp;
	}
}

//Q3 ~ remain



//Q4

void merge(int *arr1,int *arr2, int n,int *merged,int totalSize) {
	for (int i = 0; i < n;i++) {
		*(merged + i) = *(arr1 + i);
	}

	for (int i = n; i < totalSize; i++) {
		*(merged + i) = *(arr2 + (i - n));
	}
}