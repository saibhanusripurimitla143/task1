/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1,num2,result;
    char op,choice;
    do
    {
    printf("Enter the first number: ");
    if(scanf("%f",&num1)!=1)
    {
        printf("Invalid input\n");
        return 1;
    }
    printf("Enter the operator(+,-,*,/): ");
    scanf(" %c",&op);
    printf("Enter second number: ");
    if(scanf("%f",&num2)!=1)
    {
        printf("Invalid input\n");
        return 1;
    }
    switch(op)
    {
        case '+':
                result=num1+num2;
                printf("Result=%.2f\n",result);
                break;
        case '-':
                result=num1-num2;
                printf("Result=%.2f\n",result);
                break;
        case '*':
                result=num1*num2;
                printf("Result=%.2f\n",result);
                break;
        case '/':
                if(num2==0)
                printf("Error\n");
                else
                {
                result=num1/num2;
                printf("Result=%.2f\n",result);
                }
                break;
        default:printf("Invalid operator\n");
    }
    printf("Do you want to continue?(y/n): ");
    scanf(" %c",&choice);
    }while(choice=='y'||choice=='Y');
    printf("calculator closed\n");
    return 0;
}