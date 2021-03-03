#include<stdio.h>
#include<stdlib.h>

/*Insertion deletion in linked list,
Reverse of a linked list,
Merge two linked list,
Find merge point of linked list,
Find loop and find out where loop starts in linked list,
Find middle element in linked list,
*/
Node * insert(Node *head, int data);
void printList(Node *n);
typedef struct Node{
	int data;
	struct Node *next;
}Node;

void printList(Node *n)
{
	while(n != NULL)
	{
		printf("%d\t",n->data);
		n= n->next;
	}
}

struct Node * insert(struct Node *head, int data)
{
	Node *cur = (Node *)malloc (sizeof(Node));
	Node *new_node = (Node *)malloc (sizeof(Node));
	new_node->data = data;
	new_node->next = NULL;
//	printf("inserting node in a linked list\n");
	if(head == NULL)
	{

		head = (Node *)malloc(sizeof(Node));
		head = new_node ;
	}
	else
	{
		cur = head;
		while(cur->next != NULL)
		{
		cur=cur->next;
		}
		cur->next = new_node;
		
	}
	//free(cur);
	return head;
}

Node * deletion(Node *head,int key)
{
	Node *current = (Node *)malloc (sizeof(Node));
	Node *prev = (Node *)malloc (sizeof(Node));
	current = head;
	
	printf("deleting a node in linked list\n");
	
	if(key == head->data)
	{
		head = head->next;  /*if key found in head position*/
	}

	else
	{

		while(current != NULL)
		{
			//printf("current->data=%d\n",current->data);
	
			if(key == current->data)
			{

				prev->next = current->next;
				break;
			}
			prev    = current;
			current = current->next;
		}
		if(current == NULL)
		{
			printf("key not found\n");
		}
	}

	return head;
}

Node * reverse(Node *head)
{
	
	Node *prev = NULL;
	Node *next = NULL;
	Node *current =(Node *)malloc (sizeof(Node));
	current = head;
	
	printf("Reversing linked list\n");
	
	while(current !=NULL)
	{
		next          = current->next;
		current->next = prev;
		prev          = current;
		current       = next;
	}
	head = prev;
	return head;
	
	
	
}

Node * merge(Node *head1,Node *head2)
{
	Node *temp = (Node *)malloc (sizeof(Node));
	temp = head1;
	printf("Merging linked list\n");
	
	if(head1->next == NULL)
	{
		head1->next == head2;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp=temp->next;
		}
		temp->next = head2;
	}
	
	//free(head2); /*it goes to infinite loop dont know why*/
	return head1;
}

int main(void)
{
   Node *head = NULL;
   
   Node *head_2 = NULL;

   head = insert(head,1);
   head = insert(head,3);
   head = insert(head,5);
   
   head_2 = insert(head_2,2);
   head_2 = insert(head_2,4);
   head_2 = insert(head_2,6);
   
   
   printList(head);
   
   printf("\n");
   
   printList(head_2);
	printf("\n");
   
  head=deletion(head,5);
   

   printList(head);
   printf("\n");
   
  // head = merge(head,head_2);
   //printList(head);
   //printf("\n");

	head_2 = reverse(head_2);
	printList(head_2);
	printf("\n");
	
	return 0;
}
