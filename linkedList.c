/*create and use linked list*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
}*start = NULL;
void create(int data)
{
	struct node *temp, *p;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->info = data;
	temp->next =  NULL;
	if(start == NULL)
	{
		start = temp;
		return;
	}
	p = start;
	while(p->next != NULL)
		p = p->next;
	p->next = temp;
}
void display()
{
	struct node *p;
	if(start == NULL)
	{
		printf("\nEmpty List");
		return;
	}
	p = start;
	while(p!=NULL)
	{
		printf("%4d",p->info);
		p = p->next;
	}
}
void search(int value)
{
	struct node *p;
	int status = 0;
	if(start == NULL)
	{
		printf("\nEmpty List");
		return;
	}
	p = start;
	while(p!=NULL)
	{
		if(value == p->info)
		{
			printf("\nFound");
			status = 100;
		}
		p = p->next;
	}
	if(status != 100)
		printf("\nNot Found");
}
int main()
{
	int input, number;
	while(1)
	{
		printf("\n Linked List:\n-----------\n 1. Create | 2. Display | 3. Search ");
		printf("| 4. Exit \n");
		printf("Enter Your Choice: ");
		scanf("%d", &input);
		switch(input)
		{
			case 1: 
			printf("Enter item that need to be stored in list: ");
			scanf("%d", &number);
			create(number); break;
			case 2: display(); break;
			case 3:
			printf("Enter item that need to be searched in list: ");
			scanf("%d", &number);
			search(number); break;
			case 4: return 0;
			default: 
			printf("Invalid Choice! ");
		}
	}
	return 0;
}
