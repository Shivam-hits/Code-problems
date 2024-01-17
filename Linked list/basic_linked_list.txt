#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*s;

// void creation(int n);
// void display();
// deletion()

void creation(int n){
    int data;
    struct node *new,*t;
    s=(struct node *)malloc(sizeof (struct node));
    printf("Enter the value of first node: ");
    scanf("%d",&data);
    s->data=data;
    s->next=NULL;
    t=s;
    for(int i=2;i<=n;i++)
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("Enter data of %dth node\n",i);
        scanf("%d",&data);
        new->data=data;
        new->next=NULL;
        t->next=new;
        t=t->next;
    }
}

void display(int n){
    struct node *t;
    t=s;
    for(int i=1;i<=n;i++){
        printf("Data of node %dth node is: %d\n",i,t->data);
        t=t->next;
    }
}

void deletion(int pos){
    struct node *t,*p;
    t=s;
    if(pos==1){
        s=s->next;
        t->next=NULL;
        //delete(t);
    }
    else{
        p=t;
        for(int i=0;i<pos-1;i++){
            t=t->next;
        }
        p=t->next;
        t->next=p->next;
        p->next=NULL;
        //delete(p);
    }
}

int main(){
    int n,pos;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    creation(n);
    // display
    printf("Displaying linked list\n");
    display(n);
    printf("Deletion of any node in linked list\n");
    printf("Please provide position or press 0\n");
    scanf("%d",&pos);
    if(pos!=0)
    {
        deletion(pos);//problem this delete next node
        display(n-1);
    }
    else
        printf("Done");

    /*
    printf("Menu \n 
            1.Creatioon of Linked list \n
            2.deletion\n
            3.sorting\n
            4.reverse\n
            5.");
    
    printf("");
    switch(ch){
        case 1:
            printf("Enter the number of nodes: ");
            scanf("%d", &n);
            creation(n);
            break;
        case 2:
    }
    */
}