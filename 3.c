#include<stdio.h>
int main()
{
    char a[100];
    int i=0,count=0;
    printf("Enter an name ");
    fflush(stdin);
    fgets(a,100,stdin);
    while (a[i]!='\0')
    {
        i++;
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        count++;
    }
    printf("vowels = %d",count);
    return 0;
}