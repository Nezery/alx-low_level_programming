#include <stdio.h>
/**
 *
 * main -  prints the size of the computer
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu bytes(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu bytes(S)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
  	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %l	u byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
