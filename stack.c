#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int val;
	struct stack *next;
}*top;
void push(int num)
{
	if(top==NULL)
	{
		top=(struct stack *)malloc(sizeof(struct stack));
		top->next=NULL;
		top->val=num;
	}
	else
	{
		struct stack *ptr=(struct stack *)malloc(sizeof(struct stack));
		ptr->next=top;
		ptr->val=num;
		top=ptr;
	}
}
void pop()
{
	int ele;
	struct stack *ptr=top;
	ele=top->val;
	printf("the popped element is %d\n",ele);
	ptr=ptr->next;
	top=ptr;
}
void display()
{
	struct stack *var=top;
	while(var!=NULL)
	{
		printf("%d\n",var->val);
		var=var->next;
	}
}
int main()
{
	int size=5,ch,num,count=0;
	top=NULL;
	do	
	{
		printf("\nenter the choice");
		printf("\n1.push\n2.pop\n3.display\n4.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("\nenter the number\t");
					scanf("%d",&num);
					if(size==count)
					{
						printf("STACK FULL");
					}
					else
					{
						push(num);
						count++;
					}
					break;
			case 2:
					if(count==0)
					{
						printf("the stack is empty");
					}
					else
					{
						pop();
						count--;
					}
					break;
			case 3:
					display();
					break;
		}
	}while(ch!=4);
return 0;
}
