// Program to give the greatest number out of 15 whole numbers
#include<stdio.h>




int main()
{
    int Arr[15];
    int temp=0,i;
    printf("Enter 15 whole numbers");
    for(i=0;i<15;i++)
    {
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<15;i++)
    {
        if(temp<=Arr[i])
        {
            temp=Arr[i];
        }
    }
    printf("the greatest number is %d\n",temp);
}