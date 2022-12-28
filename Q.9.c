//9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
int octal(int n);
int main()
{
    int n;
    printf(" print octal of a given decimal number:-");
    printf("\n enter a number:-");
    scanf("%d",&n);
    octal(n);
    getch();
    return 0;
}
int octal(int n)
{
    int q;
    if(n<=8)
    {

     printf("%d",n);
     return;
    }
        q=n%8;
        n=n/8;
        octal(n);
         printf("%d",q);


}
