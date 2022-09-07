#include<stdio.h>
int main()
{
    char b[100];
    printf("Enter string ");
    fflush(stdin);
    fgets(b,100,stdin);
    int i=0;
    while (b[i]!='\0')
    {
        if(b[i]>= 'A' && b[i]<= 'Z' )
        {   
            b[i]=b[i]+32; 
        }i++;
    }
    printf("Lowercase word %s",b);
    return 0;
}