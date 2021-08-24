#include <stdio.h>


int main()
{
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b)
    {
        if(b>=c)
        {
            printf("greatest number is %d\n",b);
        }
        else
        {
            printf("greatest number is %d\n",c);
        }
    }
    else
    {
        if(a<=c)
        {
            printf("greatest number is %d\n",c);
        }
        else
        {
            printf("greatest number is %d\n",a);
        }
    }
    
    
    return 0;
}
