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

	printf("Size of a char: %lu byte(s).\n", sizeof(c));
	printf("Size of a int: %lu (byte(s).\n", sizeof(i));
	printf("Size of a long int: %lu byte(s).\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s).\n", sizeof(ll));
	printf("Size of a float: %lu byte(s).\n", sizeof(f));
		return (0);
}
