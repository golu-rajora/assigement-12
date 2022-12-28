//8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
int binary(int n);
int main()
{
    int n;
    printf(" print binary of a given decimal number:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    binary(n);
    getch();
    return 0;
}
int binary(int n)
{
    int q;
    if(n==0)
        return 1;
        q=n%2;
        n=n/2;
        binary(n);
         printf("%d",q);


}
