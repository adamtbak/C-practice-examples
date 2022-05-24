#include <stdio.h>

void binary(int n);
char myArray[10];
int count = 0;

int main(int argc, char *argv[])
{
	// Initialize character array to all '0'
	for(int i = 0; i < 10; i++)
	{
		myArray[i] = '0';
	}

	binary(10);
	printf("count: %d\n", count);

	return 0;
}

// Generates all the strings of n-bits in all the different combinations of zeroes and ones
void binary(int n)
{
	if(n < 1)
	{
		printf("%s\n", myArray);
		count++;
	}
	else
	{
		myArray[n-1] = '0';
		binary(n - 1);
		myArray[n-1] = '1';
		binary(n - 1);
	}
}