//A calculator needs to evaluate a postfix expression .Develop and execute a program in c using a suitable data structure 
to evaluate a valid postfix expression.Assume that the postfix expression is read as a single line consisting  of 


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char exp[10];
    int res[10], top=-1, i, pop1, pop2,result;
    printf("Enter the postfix expression:");
    scanf("%s",exp);
    for(i=0;i<strlen(exp);i++)
    {
        if(isdigit(exp[i]))
        {
            res[++top]=exp[i] - '0';
        }
        else
        {
            pop2 = res[top--];
            pop1 = res[top--];
            switch(exp[i])
            {
                case '+': result = pop1+pop2;
                          break;
                case '-': result = pop1-pop2;
                          break;
                case '*': result = pop1*pop2;
                          break;
                case '/': result = pop1/pop2;
                          break;
            }
            res[++top]=result;
        }
    }
    printf("%s = %d",exp,res[top]);
}
