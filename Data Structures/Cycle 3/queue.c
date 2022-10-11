#include<stdio.h>
#define N 6
int q[N],r=-1,f=-1;
void enq();
void deq();
void display();
int main()
{
    int k,n;
    do
   { 
        printf("Enter 1 for enqueue\n2 for dequeue\n3 for display:\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            enq();
            break;
            case 2:
            deq();
            break;
            case 3:
            display();
            break;
        }
        printf("Enter 1 to do more operations and any other number to stop:");
        scanf("%d",&k);
    }while(k==1);
    return 0;

}
void enq()
{
    int item;
    printf("Enter element to be enqueued:");
    scanf("%d",&item);
    if(r==N-1)
        printf("Overflow!");
    else if(r==-1 && f==-1)
    {
        f=r=0;
        q[r]=item;
    }
    else
    {
        r+=1;
        q[r]=item;
    }

}

void deq()
{
    if(r==-1 && f==-1)
        printf("Underflow!");
    else if(f==r)
    {
        printf("The dequeued element is %d\n",q[f]);
        f=-1;
        r=-1;
    
    }
    else
    {
        printf("The dequeued element is %d\n",q[f]);
        f+=1;
        
    }

}
void display()
{
    int i;
    for(i=f;i<=r;i++)
        printf("%d ",q[i]);

}