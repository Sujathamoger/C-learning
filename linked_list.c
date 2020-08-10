#include<stdio.h>
#include<stdlib.h>

/*Insertion deletion in linked list,
Reverse of a linked list,
Merge two linked list,
Find merge point of linked list,
Find loop and find out where loop starts in linked list,
Find middle element in linked list,
*/
struct Node * insert(struct Node *head, int data);
void printList(struct Node *n);
struct Node
{
	int data;
	struct Node *next;
};

void printList(struct Node *n)
{
	while(n != NULL)
	{
		printf("%d\t",n->data);
		n= n->next;
	}
}

struct Node * insert(struct Node *head, int data)
{
	struct Node *cur = (struct Node *)malloc (sizeof(struct Node));
	struct Node *new_node = (struct Node *)malloc (sizeof(struct Node));
	new_node->data = data;
	new_node->next = NULL;
//	printf("inserting node in a linked list\n");
	if(head == NULL)
	{

		head = (struct Node *)malloc(sizeof(struct Node));
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

struct Node * deletion(struct Node *head,int key)
{
	struct Node *current = (struct Node *)malloc (sizeof(struct Node));
	struct Node *prev = (struct Node *)malloc (sizeof(struct Node));
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

struct Node * reverse(struct Node *head)
{
	
	struct Node *prev = NULL;
	struct Node *next = NULL;
	struct Node *current =(struct Node *)malloc (sizeof(struct Node));
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

struct Node * merge(struct Node *head1,struct Node *head2)
{
	struct Node *temp = (struct Node *)malloc (sizeof(struct Node));
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
   struct Node *head = NULL;
   
   struct Node *head_2 = NULL;

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
