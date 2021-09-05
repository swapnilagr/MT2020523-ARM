// Ascending FULL STACK

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
    st->top=st->size;
}

void print(struct stack st)
{
    int i;
    for(i=st.top;i<st.size;i++)
    {
        printf("%d\t",st.S[i]);
    }
    
}

void push(struct stack *st,int x)
{
    if(st->top==0)
        printf("STACK OVERFLOW\n");
    else{
        st->top--;
        st->S[st->top]=x;
    }
}

void pop(struct stack *st)
{
    //int x=-1;
    if (st->top==st->size)
    {
        printf("STACK EMPTY\n");
    }
    else{
        int x=st->S[st->top];
        st->top++;
        printf("Entry popped successfully\n");
    }
 //   return x;
}
int main()
{
   int n,x;
   struct stack st;
   create(&st);
   do{
   printf("\n\n\n\nEnter choice\n0. EXIT  1. push  2. pop   3. print\n");
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