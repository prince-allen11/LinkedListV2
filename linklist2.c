#include<stdio.h>
#include<stdlib.h>
void main()
{	
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	int ch,entry,c,d,a;
	printf("\n1.INSERT\n2.DISPLAY\n3.COUNT\n4.SEARCH\n5.EXIT");
	while(1)
	{
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("\nEnter data:");
				scanf("%d",&entry);
				if(head==NULL)
				{
					head=(struct node*)malloc(sizeof(struct node));
					head->data=entry;
					pos=head;
					tail=head;
				}
				else
				{
					tail->next=(struct node*)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
				}
				break;
			}
			case 2:
			{
				pos=head;
				printf("\n Elements are:");
				while(pos!=NULL)
				{
					printf("\t %d",pos->data);
					pos=pos->next;
				}
				break;
			}
			case 3:
			{	
				pos=head;
				while(pos!=NULL)
				{
					c=c+1;
					pos=pos->next;
				}
				printf("\n Number of elements:%d",c);
				break;		
			}
			case 4:
			{	
				a=0;
				pos=head;
				printf("Enter element to be searched for:");
				scanf("%d",&d);
				while(pos!=NULL)
				{
					if(pos->data==d)
					{
						a=1;
						break;
					}
					pos=pos->next;
				}
				if(a==1)
				{
					printf("Element found!");
				}
				else
				{
					printf("Element not found!");
				}
				break;
			}
			case 5:
			{
				printf("************************************************************");
				exit(0);
			}
		}
		printf("\n");
	}
}
