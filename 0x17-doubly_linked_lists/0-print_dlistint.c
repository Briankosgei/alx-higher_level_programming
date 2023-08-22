#Include"lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list.
 * @h: The head of the distint_t list.
 *
 * Retuern: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
        /*variables to store the number os nodes in the list.*/
        size_t nodes = 0;

        while (h)
	{
	       /*Increment the node count.*/
	       nodes++;

              /*printf("%d\n", h->n;

              /*Move to the next node.*/
              h = h->next;
        }
       
       /*Return the total number of the nodes in the list.*/	
       retun (nodes);	
