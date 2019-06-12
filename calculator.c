#include<stdio.h>
void main()
{
int a, b, result;
int choice;
result = 0;
printf("Enter two numbers");
scanf("%d%d", &a,&b);
printf("Enter your choice: \n 1 for adition\n 2 for subtraction\n 3 for multiplication");
scanf("%d", &choice);
switch(choice){
case 1: result = a+b;
	printf("The sum of %d and %d is: %d",a,b,result);
	break;
case 2: result = a-b; 
	printf("The difference of %d and %d is: %d",a,b,result);
	break;
case 3: result = a*b;
        printf("The multiplication of %d and %d is:%d",a,b,result);
        break;
default:"invalid choice";
}
}

