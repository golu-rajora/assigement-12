//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void sq(int n);
int main()
{
    int n;
    printf("print squares of first N natural numbers:-");
    printf("\n enetr a number:-");
    scanf("%d",&n);
    sq(n);
    getch();
    return 0;
}
void sq(int n)
{
    if(n==0)
        return ;
        sq(n-1);
     printf(" %d",n*n);
}
