#include "node.h"
#include <stdio.h>
#include <stdlib.h>

void push(void *node, int data) {
	Node *temp = *((Node **)node);
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = (Node *)malloc(sizeof(Node));
	temp->next->data = data;
}

void pop(void *node) {
}

int isEmpty(void *node) {
	return *((Node **)node) == NULL;
}

void print(void *node) {
	Node *newnode = *((Node **)node);
	printf("\n");
	while (newnode != NULL) {
		printf("%d\n", newnode->data);
		newnode = newnode->next;
	}
}
