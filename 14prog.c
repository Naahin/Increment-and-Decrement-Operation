#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter value for a: ");
    scanf("%d",&a);
    printf("\nEnter value for b: ");
    scanf("%d",&b);
    x=++a + b--;
    printf("result: %d",x);
}

