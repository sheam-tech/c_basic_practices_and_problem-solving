#include <stdio.h>
int main()
{
    char oper;
    float a,b;
    printf("write the expression(press enter after every single charecter or number) and then enter\n");
    scanf("%f",&a);
    scanf(" %c",&oper);
    scanf("%f",&b);
    switch(oper)
    {
    case '+':
    {
        printf("%.2f",a+b);
        break;
    }
    case '-':
    {
        printf("%.2f",a-b);
        break;
    }
    case '*':
    {
        printf("%.2f",a*b);
        break;
    }
    case '/':
    {
        printf("%.2f",a/b);//    c=3.0/4;// to get a float value, one of the operand must be in float data type
        break;                                //printf("The result is %.2f",c);

    }
    default:
        printf("Invalide Oprerator or Operands!");
    }

    getch();

}
