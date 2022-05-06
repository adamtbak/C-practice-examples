/*
	This file shows different ways to accessing the contents of an array
	using indexing and using pointers. This is from Exercise 15 in
	"Learn C the Hard Way" by Zed A. Shaw
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	// Create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};

	// safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	// first way using indexing
	for(i = 0; i < count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("---\n");

	// set up the pointers to the start of the arrays
	int *currentAge = ages;
	char **currentName = names;

	// second way using pointers
	for(i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n", *(currentName + i), *(currentAge + i));
	}

	printf("---\n");

	// third way, pointers are just arrays
	for(i = 0; i < count; i++)
	{
		printf("%s is %d years old again.\n", currentName[i], currentAge[i]);
	}

	printf("---\n");

	// fourth way with pointers in a complex way
	for(currentName = names, currentAge = ages; (currentAge - ages) < count; currentName++, currentAge++)
	{
		printf("%s lived %d years so far.\n", *currentName, *currentAge);
	}

	return 0;
}