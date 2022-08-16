#include "lists.h"

/**
 * find_listint_loop - finds the loop contained in
 *                     a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: no loop - NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *pen, *paper;
if (head == NULL || head->next == NULL)
return (NULL);
pen = head->next;
paper = (head->next)->next;
while (paper)
{
if (pen == paper)
{
pen = head;
while (pen != paper)
{
pen = pen->next;
paper = paper->next;
}
return (pen);
}
pen = pen->next;
paper = (paper->next)->next;
}
return (NULL);
}
