#include<stdio.h>
#include<string.h>

int main()
{
    int i,w=0,d=0,s=0;
    char a[100];
    printf("Enter an name ");
    fflush(stdin);
    fgets(a,100,stdin);
    while (a[i]!='\0')
    {
        if(a[i]>='a' && a[i]<='z')
        {
        w++;
        }
        else if (a[i]>='0' && a[i]<='9')
        {
            d++;
        }
        else{
            s++;
        }
        i++;
    }
    printf("The alpha is %d\nThe digit is %d\nThe special word is %d",w,d,s-1);
    
}