#include<stdio.h>
#include<stdlib.h>
/**
 * main  - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[26] ="abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');

        return(0);
} 
