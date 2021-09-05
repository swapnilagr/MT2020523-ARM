// Ascending EMPTY STACK

#include<stdio.h>
#include<stdlib.h>
// Stack using array

struct stack{
    int top;
    int size;
    int *S;
};

void create(struct stack *st)
{
    printf("enter the size of stack\t");
    scanf("%d",&st->size);
    st->S=(int *)malloc(st->size*sizeof(int));
    st->top=0;
}

void print(struct stack st)
{
    int i;
    for(i=st.top-1;i>=0;i--)
    {
        printf("%d\t",st.S[i]);
    }
    
}

void push(struct stack *st,int x)
{
    if(st->top==st->size)
        printf("STACK OVERFLOW\n");
    else{
        
        st->S[st->top]=x;
        st->top++;
    }
}

void pop(struct stack *st)
{
    int x=-1;
    if (st->top==0)
    {
        printf("STACK EMPTY\n");
    }
    else{
        x=st->S[st->top];
        st->top--;
    }
 //   return x;
}
int main()
{
   int n,x;
   struct stack st;
   create(&st);
   do{
   printf("\nEnter choice\n0. EXIT  1. push  2. pop   3. print\n");
   scanf("%d",&n);
   switch (n)
   {
   case 1:
        printf("Enter number to push\n");
        scanf("%d",&x); 
       push(&st,x);
       break;
    case 2:
        pop(&st);
        printf("Entry popped successfully\n");
        break;
   case 3:
        print(st);
        break;
   case 0:
       break;
    
    default:
        printf("Incorrect choice\n");
   }
}while(n!=0);
}