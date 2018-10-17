#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int mutex=1,x=0,full=0,empty,choice;
void producer();
void consumer();
int wait(int s)
{
   return(--s);

}
int signal(int s)
{
   return(++s);
}

void main()
{
	clrscr();
	printf("Enter the size of max buffer ");
	scanf("%d",&empty);

	while(1)
	{
	printf("Enter choice: \n1. Producer \n2. Consumer\n3. Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
	    {   if(mutex==1 && empty!=0)
		  { producer();}
		else
		   printf("Buffer is full..!! \n");
		break;
	    }
	    case 2:
	    {
		if(mutex==1 && full!=0)
		    consumer();

		else
		    printf("Buffer is empty..!! \n");
		break;
	    }
	    case 3:
		{ exit(0);
		 break; }
	}
	 }
}

void producer()
{
    mutex=wait(mutex);
    full=signal(full);
    empty=wait(empty);
    x++;
    printf("The producer added ITEM %d.\n",x);
    mutex=signal(mutex);
}
void consumer()
{   int val=x;
    mutex=wait(mutex);
    empty=signal(empty);
    full=wait(full);

    printf("The consumer consumed ITEM %d.\n",x);
    x--;
    printf("The Value of ITEM was = %d\n",val);
    mutex=signal(mutex);

}
