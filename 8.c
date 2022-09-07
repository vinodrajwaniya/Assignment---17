#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i=0;
    printf("Enter a string ");
    gets(a);
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
    }
    printf("%s ",b);
    return 0;
}