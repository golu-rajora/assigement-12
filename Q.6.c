//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void even_reverse(int n);
int main()
{
   int n;
   printf("print first N even natural numbers in reverse order :-");
   printf("\n enter a number:-");
   scanf("%d",&n);
   n=n*2;
   even_reverse(n);
   getch();
   return 0;
}
void even_reverse(int n)
{
    if(n==0)
        return;

    printf(" %d",n);
    even_reverse(n-2);

}
