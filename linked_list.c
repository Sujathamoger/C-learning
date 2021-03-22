#include<stdio.h>
#include<stdlib.h>

/*Insertion deletion in linked list,
Reverse of a linked list,
Merge two linked list,
Find merge point of linked list,
Find loop and find out where loop starts in linked list,
Find middle element in linked list,
*/

typedef struct Node
{
	int data;
	struct Node *next;
}Node;

void insert(Node **head, int data);
void printList(Node *n);
void deletion(Node **head, int key);
void reverse(Node **head);

void printList(Node *n)
{
	while(n != NULL)
	{
		printf("%d\t",n->data);
		n= n->next;
	}
	printf("\n");
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

int getCount(Node *head)
{
	int len=0;
	Node *temp = NULL;
	temp = head;
	while(temp!=NULL)
	{
		len=len+1;
		temp = temp->next;
	}
	printf("len=%d\n",len);
	return len;
}

int getIntersection(int n, Node *head1, Node *head2)
{
	Node *current1 = NULL;
	Node *current2 = NULL;
	int i;
	
	current1 = head1;
	current2 = head2;
	for(i=0;i<n;i++)
	{
		current1 = current1->next;
	}
	
	while(current1->next!=NULL && current2->next!=NULL)
	{
		if(current1->data == current2->data)
			return current1->data;
		
		current1=current1->next;
		current2=current2->next;
	}
}

/*Merge point of two linked list*/
void mergePoint(Node *head1, Node *head2)
{
	int c1 ,c2,d,retval;
	
	c1 = getCount(head1);
	c2 = getCount(head2);
	
	if(c1 > c2)
	{
		d=c1-c2;
		retval=getIntersection(d,head1,head2);
	}
	else
	{
		d=c2-c1;
		retval=getIntersection(d,head2,head1);
	}
	
	printf("linked list are merging at the point=%d\n",retval);
	
}
int main(void)
{
	Node *head = NULL;
	Node *head_2 = NULL;

	insert(&head,1);
   	insert(&head,3);
   	insert(&head,5);
   	insert(&head,7);
   
   	insert(&head_2,2);
   	insert(&head_2,4);
   	insert(&head_2,6);
   	insert(&head_2,3);
   	insert(&head_2,5);
   	
   
    printf("first linked list:\t");
  	printList(head);
   	printf("\n");
   
   	printf("second linked list:\t");
   	printList(head_2);
   	printf("\n");
   
   	deletion(&head,7);
   	
   	printf("after deleting  last node in first linked list:\t");
   	printList(head);
   	printf("\n");
   
  	// head = merge(head,head_2);
   	//printList(head);
   	//printf("\n");
   	
   	mergePoint(head,head_2);
   	
   	printList(head);
   	printList(head_2);
	
    reverse(&head_2);
    
    printf("reversing second linked list:\t");
    printList(head_2);
    printf("\n");
	return 0;
}
