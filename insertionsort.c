#include <stdio.h>
void insertionSort(int array[], int size)
{
	for(int i = 1; i < size; i++)
	{
		int key = array[i];
		int j = i - 1;
		while(key < array[j] && j >= 0)
		{
			array[j + 1] = array[j];
			--j;
		}
		array[j + 1] = key;
	}
}
void display(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("Enter number of elements:\n");
	scanf("%d", &n);
	int data[n], i;
	for(i = 0; i < n; i++)
	{
		printf("Enter value for data[%d]:\n", i);
		scanf("%d", &data[i]);
	}
	printf("\nThe unsorted array is:");
	display(data, n);
	insertionSort(data, n);
	printf("\nThe array after insertion sort:");
	display(data, n);
	return 0;
}
	
		
