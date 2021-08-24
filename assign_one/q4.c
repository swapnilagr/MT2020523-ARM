// sorting array of 20 elements
#include<stdio.h>


int main()
{
    int Arr[20];
    int temp,i,j;
    printf("Enter the elements of the array\n");
    for(i=0;i<20;i++)
    {
        scanf("%d\n",&Arr[i]);
    }

    for(i=0;i<20;i++)
    {
        for(j=i+1;j<20;j++)
        {
            if(Arr[i]>=Arr[j])
            {
                temp=Arr[i];
                Arr[i]=Arr[j];
                Arr[j]=temp;
            }
        }
    }

    for(i=0;i<20;i++)
    {
        printf("%d\t",Arr[i]);
    }

}