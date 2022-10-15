#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)

	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}
int main()
{
	int i;
	int arr[] = {54, 27, 95, 24, 99, 13, 2, 8};
	int n = sizeof(arr)/sizeof(arr[0]);
	int size=n;
	bubbleSort(arr, n);
	for (i = 0; i < size; i++)
	{
			cout << arr[i] << " ";
    }	
}

