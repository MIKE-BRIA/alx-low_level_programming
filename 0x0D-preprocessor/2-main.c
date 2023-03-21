#include <stdio.h>

/**
 * main - prints name of the file it was compiled from
 *
 * Return: nothing
 */
int main(void)
{
  printf("%s\n", --FILE--);
  return 0;
}

