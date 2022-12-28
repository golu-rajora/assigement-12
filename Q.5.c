//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
void even(int n);
int main()
{
   int n;
   printf("print first N even natural numbers:-");
   printf("\n enter a number:-");
   scanf("%d",&n);
   n=n*2;
   even(n);
   getch();
   return 0;
}
void even(int n)
{
    if(n==0)
        return;
    even(n-2);
    printf(" %d",n);
}
