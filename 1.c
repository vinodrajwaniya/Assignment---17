#include<stdio.h>
int main()
{
    char a[100];
    int i=0,count=0; 
    printf("Enter an name ");
    fflush(stdin);
    fgets(a,100,stdin);
    while (a[i]!=0)
    {
        i++;
        count++;
    }
    printf("length of the string is %d",count-1);
    return 0;
}