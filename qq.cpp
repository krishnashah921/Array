#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct queue
{
    struct node *rear;
    struct node *front;
};
void initial(struct queue *);
void qadd(struct queue *,int);
int qdel(struct queue *);
void dis(struct queue *);
void push(int);
void pop();
void display(struct queue *);
struct queue q1,q2;
int main()
{
    initial(&q1);
    initial(&q2);
    push(5);
    push(6);
    push(7);
    pop();
    printf("\nelements now are:\n");
    display(&q1);
    printf("\n");
    display(&q2);
    return 0;
}

void initial(struct queue *q)
{
    q->front=NULL;
    q->rear=NULL;
}

void qadd(struct queue *q,int n)
{
    struct node *tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
   
    tmp->data=n;
    tmp->next=NULL;

    if(q->front==NULL)
    {
        q->rear=tmp;
        q->front=tmp;
        return;
    }

    q->rear->next=tmp;
    q->rear=tmp;
}

int qdel(struct queue *q)
{
    struct node *tmp;
    int itm;
    if(q->front==NULL)
    {
        printf("\nqueue is empty");
        return 0;
    }

    
    tmp=q->front;
    itm=tmp->data;
    q->front=tmp->next;
    free(tmp);
    return itm;

}

void display(struct queue *q1)
{
    struct node *tmp;
    tmp=q1->front;
    while((tmp)!=NULL)
    {
        printf("\n%d",(tmp->data));   
        tmp=tmp->next;
    }
    printf("\n");
}


void push(int val)
{
    struct queue tmp;
    int j;
    qadd(&q2,val);
   
    while(((&q1)->front)!=NULL)
    {
        j=qdel(&q1);
        qadd(&q2,j);
    }

   
    tmp=q1;  
    q1=q2;
    q2=tmp;

    printf("\nelements after pushing are:\n");
    display(&q1);

}
   
void pop()
{
    printf("\n element deleted is %d",qdel(&q1));
}
