#include "lists.h"

/**
 * sum_listint - gives the sum of all the
 *               data (n) of a listint_t list.
 * @head: a pointer to the head 
 * of the listint_t list.
 *
 * Return: if list is empty - 0.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
