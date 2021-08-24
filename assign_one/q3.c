//program to output the number of even numbers in an Array of 20 elements
#include<stdio.h>


int main()
{
    int Arr[20];
    int temp=0,i;
    for(i=0;i<20;i++)
    {
        scanf("%d",&Arr[i]);
    }
    //Execution
    for(i=0;i<20;i++)
    {
        if(Arr[i]%2==0)
        temp=temp+1;
    }
    printf("%d\n",temp);
}