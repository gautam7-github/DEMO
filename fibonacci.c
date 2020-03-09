#include <stdio.h>
int main()
{
    int a=0,b=1,c=0,n;

    printf("Enter N:");
    scanf("%i",&n);

    while(c<=n)
    {
        a=b;
        b=c;
        printf("%i\n",c);
        c=a+b;
    }
}
