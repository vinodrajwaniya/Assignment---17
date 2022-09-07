#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],t;
    int i=0,j=strlen(a)-1;
    printf("Enter an name ");
    fflush(stdin);
    fgets(a,100,stdin);
    while(i<=j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++; j--;
    }
    printf("%s",a);
    return 0;
}