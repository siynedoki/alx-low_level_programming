#include <stdio.h>
/**
* main - Entry point
* Return: always 0 (success)
*/
int main(void)
{
	printf("size of a char is %lu byte(s)\n", sizeof(char));
	printf("size of an int is %lu byte(s)\n", sizeof(int));
	printf("size of a long int is %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int is %lu byte(s)\n", sizeof(long long int));
	printf("size of a float is %lu byte(s)\n", sizeof(float));
	return (0);
}
