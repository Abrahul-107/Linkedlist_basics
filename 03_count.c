#include<stdio.h>
#include<stdlib.h>
#define max 100

struct node
{
    int data;
    struct node *next;


};

int count(struct node*p )
{
    // if(p!=NULL)
    // {
        
    //     return count(p->next)+1;
    // }

    int x =0;
    if(p)
    {
        x = count(p->next);
        return 1+x;
    }


}

int main()
{
    int arr[max] = {2,4,5,6,78,9,56,8,98,88};
    int  n = sizeof(arr) / sizeof(arr[0]);
    struct node* head,*temp,*last;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = arr[0];
    head->next = NULL;
    last = head;

    for(int i =1;i<9;i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;

    }
    int c = 0;
    int ans = count(head);

    printf("%d ",ans);

    return 0;



    




}