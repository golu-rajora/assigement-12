//10. Write a recursive function to print reverse of a given number
#include<stdio.h>
int red=0,rev=0;
int main()
{
    printf(" recursive function to print reverse of a given number:-\n");
    int x,y;
    printf("enter a number:-");
    scanf("%d",&x);
    y=reverse(x);
    printf("%d number the reverse number is=%d",x,y);
    getch();
    return 0;
}
 int reverse(int x)
 {
     if(x==0)
        return x;
     red=x%10;
     rev=rev*10+red;
     x=x/10;
     reverse(x);
     return rev;
 }
