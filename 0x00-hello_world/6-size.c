#include <stdio.h>

/**
 * main - serves as the starting and entry point
 * Description: This C program prints the sizes of various data types.
 * Return: 0 if properly exited (sucess).
*/

#include <stdio.h>

int main(void)
{
  printf("Size of a char: %zu byte(s)\n", sizeof(char));
  printf("Size of an int: %zu byte(s)\n", sizeof(int));
  printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
  printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
  printf("Size of a float: %zu byte(s)\n", sizeof(float));

  return (0);
}


