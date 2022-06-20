#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(void)
{
	printf("start program");
	Node *head = &(Node){0, &(Node){1, &(Node){2, NULL}}};

	push(&head, 3);
	push(&head, 4);
	push(&head, 5);
	push(&head, 6);
	push(&head, 7);
	push(&head, 8);
	push(&head, 9);
	push(&head, 10);
	push(&head, 11);
	push(&head, 12);

	print(&head);

	printf("end program\n");
	return 0;
}

