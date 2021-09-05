// Implement simple queue
#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));

}

void push(struct Queue *q,int x){
	//printf("\nentered");
	if(q->rear==q->size-1){
		printf("Overflow\n");
	}
	else {
		q->rear++;
		q->Q[q->rear]=x;
	}
}

void pop(struct Queue *q){
	//int x=-1;
    if(q->front==q->rear)
        printf("Queue is Empty");
    else{
        q->front++;
        //x=q->Q[q->front];
    }

}

void print(struct Queue q){
	int i;
	for(i=q.front+1;i<=q.rear;i++){
		printf("%d ",q.Q[i]);
	}
	printf("\n");
}


void main(){
	int ch,r;
	struct Queue q;
    create(&q,5);
	do{
	
	printf("\n\nEnter choice: 1 for PUSH , 2 for POP , 3 for PRINT , 0 for exit :\n");
	scanf("%d",&ch);
	switch(ch){
		case 1: printf("Enter element to push\n");
                scanf("%d",&r);
                push(&q,r);
				break;
		case 2: pop(&q);
				break;
		case 3: print(q);
				break;
		case 0: printf("Good Bye...");
				break;
		default: printf("Invalid Choice");
	} 
	}while(ch!=0);

	
	
}