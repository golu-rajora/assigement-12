//3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void odd(int n);
int main()
{
    int n;
    printf("print first N odd natural numbers:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    n=n*2-1;
    odd(n);
    getch();
    return 0;
}
void odd(int n)
{

    if(n==-1)
        return ;
    odd(n-2);
    printf(" %d",n);
}
