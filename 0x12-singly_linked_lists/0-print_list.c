#include "lists.h"

/**
 * print_list_t - function with one argument
 * @h: pointer to struct
 *
 * Description: prints all the elements of a list
 * Return: number of nodes
 */
size_t print_list_t(const list_t *h)
{
  int count = 0;

  while (h != NULL)
    {
      printf("%d\n", h->n);
      h = h->next;
      count++;
    }
  return (count);
}
