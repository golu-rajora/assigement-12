//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void odd_reverse(int n);
int main()
{
    int n;
    printf("print first N odd natural numbers:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    n=n*2-1;
    odd_reverse(n);
    getch();
    return 0;
}
void odd_reverse(int n)
{

    if(n==-1)
        return ;
        printf(" %d",n);
    odd_reverse(n-2);
}

