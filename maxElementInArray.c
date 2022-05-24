#include <stdio.h>

int maxElementInArray(int array[], int n);
int max(int n1, int n2);

int main(int argc, char *argv[])
{
	int intArray[] = {5, 9, 8, 6, 4, 1, 2, 0, 3, 7};
	int intArray2[] = {11, 15, 23, 42, 31, 19, 20, 8, 33, 2};
	printf("max element in Array: %d\n", maxElementInArray(intArray, 10));
	printf("max element in Array2: %d\n", maxElementInArray(intArray2, 10));

	return 0;
}

int maxElementInArray(int array[], int n)
{
	if(n == 1)
		return array[0];

	if(n == 2)
		return max(array[0], array[1]);

	return max(array[n-1], maxElementInArray(array, n - 1));
}

int max(int n1, int n2)
{
	if(n1 > n2)
		return n1;
	else
		return n2;
}