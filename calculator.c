#include<stdio.h>
#include<conio.h>
void main()
{
double a, b, result, choice;
clrscr();
result = 0;
printf("Enter two nubers");
scanf("%d%d", &a,&b);
printf("Enter your choice: \n 1 for adition\n 2 for subtraction\n 3 for multiplication");
switch(choice){
case 1: result = a+b;
	printf("The sum of %d and %d is: %d",a,b,result);
	break;
case 2: result = a-b; 
	printf("The difference of %d and %d is: %d",a,b,result);
	break;
case 3: break;
default:"invalid choice";
}
getch();
}

