#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *pen, *paper;
pen = paper = head;
while (pen && paper && paper->next)
{
pen = pen->next;
paper = paper->next->next;
if (pen == paper)
{
pen = head;
break;
}
}
if (!pen || !pen || !pen->next)
return (NULL);
while (pen != paper)
{
pen = pen->next;
paper = paper->next;
}
return (paper);
}
