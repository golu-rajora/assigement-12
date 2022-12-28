// 2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void print_reverse(int n);
int main()
{
    int n;
    printf(" print first N natural numbers in reverse order-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    print_reverse(n);
    getch();
    return 0;
}
void print_reverse(int n)
{
    if(n==0)
        return;
    printf(" %d",n);
    print_reverse(n-1);
}
