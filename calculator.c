#include<stdio.h>
#include<conio.h>
void main()
{
double a, b, result;
int choice;
clrscr();
result = 0;
printf("Enter two nubers");
scanf("%lf%lf", &a,&b);
printf("Enter your choice: \n 1 for adition\n 2 for subtraction\n 3 for multiplication");
scanf("%d", &choice);
switch(choice){
case 1: result = a+b;
	printf("The sum of %lf and %lf is: %lf",a,b,result);
	break;
case 2: result = a-b; 
	printf("The difference of %lf and %lf is: %lf",a,b,result);
	break;
case 3: break;
default:"invalid choice";
}
getch();
}

