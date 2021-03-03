#include<stdio.h>
#include<stdlib.h>

/*Insertion deletion in linked list,
Reverse of a linked list,
Merge two linked list,
Find merge point of linked list,
Find loop and find out where loop starts in linked list,
Find middle element in linked list,
*/
void insert(Node **head, int data);
void printList(Node *n);
void deletion(Node **head, int key);
void reverse(Node **head);
typedef struct Node{
	int data;
	Node *next;
}Node;

void printList(Node *n)
{
	while(n != NULL)
	{
		printf("%d\t",n->data);
		n= n->next;
	}
}

void insert(Node **head, int data)
{
	Node *new_node = (Node *)malloc (sizeof(Node));
	Node *cur = *head;
	new_node->data = data;
	new_node->next = NULL;
	//printf("inserting node in a linked list\n");
	if(*head == NULL)
	{
		*head = new_node ;
		return;
	}
	while(cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = new_node;
	//free(cur);
}

void deletion(Node **head, int key)
{
	Node *current = NULL;
	Node *prev = NULL;
	current = *head;
	
	printf("deleting a node in linked list\n");
	
	//If key found in head
	if((current != NULL) && (current->data == key))
	{
		*head = current->next;
		free(current);
		return;
	}
	
	while((current != NULL) && (current->data != key))
	{
		prev    = current;
		current = current->next;
	}
	//If key does not present in linked list
	if(current == NULL)
	{
		printf("key not found\n");
		return;
	}
	prev->next = current->next;
	free(current);
}

void reverse(Node **head)
{
	Node *prev = NULL;
	Node *next = NULL;
	Node *current = NULL;
	current = *head;
	
	printf("Reversing linked list\n");
	
	while(current !=NULL)
	{
		next          = current->next;
		current->next = prev;
		prev          = current;
		current       = next;
	}
	*head = prev;	
}

Node * merge(Node *head1, Node *head2)
{
	Node *temp = NULL;
	temp = head1;
	printf("Merging linked list\n");
	
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	temp->next = head2;

	return head1;
}

int main(void)
{
	Node *head = NULL;
	Node *head_2 = NULL;

	insert(&head,1);
   	insert(&head,3);
   	insert(&head,5);
   
   	insert(&head_2,2);
   	insert(&head_2,4);
   	insert(&head_2,6);
   
  	printList(head);
   	printf("\n");
   
   	printList(head_2);
   	printf("\n");
   
   	deletion(&head,5);
   
   	printList(head);
   	printf("\n");
   
  	// head = merge(head,head_2);
   	//printList(head);
   	//printf("\n");

     	reverse(&head_2);
     	printList(head_2);
     	printf("\n");
	return 0;
}
