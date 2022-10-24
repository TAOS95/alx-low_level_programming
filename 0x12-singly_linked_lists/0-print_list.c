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
 size_t nelem;

 nelem = 0;
 while (h != NULL)
   {
     if (h->str == NULL)
       printf("[%d] %s\n", 0, "(nil)");
     else
       printf("[%d] %s\n", h->len, h-str);
      h = h->next;
      nelem++;
    }
  return (nelem);
}
