#include <stdio.h>

/**
 * main - Entry point
 * Description Print Data type size in console using printf func.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	printf("Integer size: %d byte(s)", sizeof(int));

	printf("Char size: %d byte(s)", sizeof(char));

	printf("Float size: %d byte(s)", sizeof(float));
	
	printf("Long Integer size: %d byte(s)", sizeof(long int));
	
	printf("Long Long Integer: %d byte(s)", sizeof(long long int));
	
	return (0);

}
