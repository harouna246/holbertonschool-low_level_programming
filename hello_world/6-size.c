#include <stdio.h>
/**
* main - prints the size of various types on the machine
*
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long));
printf("Size of a long long int: %lu byte(s)\n",
(unsigned long)sizeof(long long));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}

