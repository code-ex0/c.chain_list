#ifndef NODE_H
#define NODE_H

typedef struct node {
	int data;
	struct node *next;
} Node;

void push(void *Node, int data);
void pop(void *Node);
int isEmpty(void *Node);
void print(void *Node);

#endif // NODE_H
