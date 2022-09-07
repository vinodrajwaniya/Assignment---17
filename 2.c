#include<stdio.h>
int main()
{
    char a[]="Vinod Rajwaniya";
    char b[100];
    char c;
    int i=0,count=0;
    printf("Enter an name ");
    fflush(stdin);
    fgets(b,100,stdin);
    printf("Enter a word ");
    scanf("%c",&c);
    while (a[i]!='\0')
    {
        i++;
        if(b[i]==c)
        count++;
    }
    printf("occurrence is %d",count);
    return 0;
}