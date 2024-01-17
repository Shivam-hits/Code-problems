#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head;

void creation(int n)
{
    int data;
    struct node *t,*p,*new;
    printf("Enter value of 1st node \n");
    head=(struct node *)malloc(sizeof (struct node));
    scanf("%d",&head->data);
    head->prev=NULL;
    head->next=NULL;
    t=head;
    for(int i=2;i<=n;i++)
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data %dth node \n",i);
        scanf("%d",&new->data);
        new->prev=p;
        new->next=NULL;
        t->next=new;
        t=t->next;
    }
}
void display(){
    struct node *t;
    t=head;
    for(int i=1;t!=NULL;i++)
    {
        printf("Data of %dth node is %d \n", i ,t->data);
        t=t->next;
    }
}
void insert(int pos){
    int data;
    struct node *t;
    t=head;
    for(int i=0;i<pos-1;i++){
        t=t->next;
    }
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter data new node \n");
    scanf("%d",&new->data);
    new->prev=t;
    new->next=t->next;
    if(t->next)
        t->next->prev=new;
    t->next=new;
    t=new;
}

int main()
{
    int n,pos;
    printf("creation of double linked \n");
    printf("Enter number of node creation \n");
    scanf("%d",&n);
    creation(n);
    printf("Display");
    display();
    printf("insertion , enter position \n");
    scanf("%d",&pos);
    insert(pos);
    //display
    display();
    return 0;
}