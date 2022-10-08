#include <stdlib.h>
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
  void *point = malloc(b);
  if (point == NULL)
    exit(98);
  return (point);
}
