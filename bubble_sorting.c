#include<stdio.h>

void input(int*p)     //For taking input from user

{

	int i;

	for(i=0;i<=4;i++)

		scanf("%d",(p+i));

}

void display(int*p)  //For displaying numbers

{

	int i;

	for(i=0;i<=4;i++)

		printf("%d",*(p+i));

}


void lineChange(int*p)

{

	printf("\n");

}



void sort(int*p)

{

	int round,t,i;    //Here t is for swapping

	for(round=0;round<=4;round++)

	{

		for(i=0;i<=4;i++)

			if(*(p+i)>*(p+i+1))

			{

				t=*(p+i);

				*(p+i)=*(p+i+1);

				*(p+i+1)=t;

			}

	}

}

#include<stdio.h>

int main()

{

	int a[5];

	printf("Enter your numbers:");

	input(a);

	display(a);

	lineChange(a);

	sort(a);

	display(a);

	return 0;

}
