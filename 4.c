#include<stdio.h>
int main()
{
    char a[100];
    int i=0;
    printf("Enter an name ");
    fflush(stdin);
    fgets(a,100,stdin);
    while (a[i]!='\0')
    {
        if(a[i]>= 'a' && a[i]<= 'z' )
        {   
            a[i]=a[i]-32; 
        }i++;
    }
    printf("Uppercase word %s",a);
    return 0;
}