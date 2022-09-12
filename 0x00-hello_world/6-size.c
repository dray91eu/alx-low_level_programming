#include <stdio.h>

/**
 * main - put the puts the string into a function
 * description: returns the value of each input type
 *  prints the values
 * Return: a value 0
 */


int main(void)
{
	char c;
	int i;
	long int li;
	long long int ll;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c)"byte(s)");
	printf("Size of a int: %lu.\n", (unsigned long)sizeof(i)"byte(s)");
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(li)"byte(s)");
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(ll)"byte(s)");
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f)"byte(s)");
		return (0);
}
