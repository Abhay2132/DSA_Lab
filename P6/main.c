#include<stdio.h>
#include<process.h>
#include<string.h>
#define MAX 5
void push( ); void pop( ); void display( );void status( );void pus(char);char po( );void str( );
int stack[MAX], choice, n, top, x, i;
char stac[50];
int to= -1;
char string[30];
int count=0, len;
int main( )
{
	top= -1;
	printf("\nSTACK operation using Array");
	printf("\n----------------------------");
	printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.STATUS\n5.CHECK PALINDROME\n6.EXIT\n**********\n----------------------------");
	do
	{
		printf("\n\n\nEnter your choice:- ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				status();
				break;
			case 5:
			    str();
				break;
			case 6:
				printf("\nExit point.\n");
				break;
			default:
				printf("\nPlease enter VALID choice(1/2/3/4/5/6).");
		}
	}
	while(choice!=6);
	return 0;
}
void push()
{
	if(top==MAX-1)
	{
		printf("\n\tStack is Overflow.");
	}
	else
	{
		top=top+1;
		printf("\nEnter the value to be pushed:- ");
		scanf("%d",&n);
		stack[top]=n;
	}
}
void pop()
{
	if(top<0)
	{
		printf("\nStack is Underflow.");
	}
	else
	{
		printf("\nThe popped element is %d.",stack[top]);
		top--;
	}
}


void display()
{
	if(top>=0)
    {
	printf("\nThe stack elements are:- \n");
	for(i=top;i>=0;i--)
	printf("\n%d",stack[i]);
	printf("\nPress next choice.");
    }
    else
    {
    	printf("\nStack is Empty.");
	}
}
	void status()
	{
		printf("\nYou have entered %d elements in this stack.\n",top+1);
	    if((4-top)==0)
	    {
	        printf("\nThe stack is full.\nYou can't insert anymore elements in it.\n");
        }
	    else
	    printf("The number of more elements which can be inserted in this stack is %d.\n",4-top);
	}  

void str()
{

	printf("\nEnter the string:- ");
	scanf("%s",string);
	len=strlen(string);
	for(i=0;i<len;i++)
	{
		pus(string[i]);
	}
	for(i=0;i<len;i++)
	{
		if(string[i]==po())
		{
			count++;
		}
	}
	if(len==count)
	printf("\nString is a palindrome.",string);
	else
	printf("\nString is not a palindrome.",string);
}

void pus(char ch)
{
	to=to+1;
	stac[to]=ch;
}
char po()
{
	char c;
	c=stac[to];
	to=to-1;
	return c;
}