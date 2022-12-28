//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void print_natural(int n);
int main()
{
    int n;
    printf("print first N natural numbers:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    print_natural(n);
    getch();
    return 0;
}
void print_natural(int n)
{
    if(n==0)
        return;
    print_natural(n-1);
    printf(" %d",n);
}
