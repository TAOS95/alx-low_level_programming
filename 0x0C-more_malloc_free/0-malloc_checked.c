#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
  void *p = malloc(b);

  if (p == NULL)
    exit(98);

  return (p);
}
