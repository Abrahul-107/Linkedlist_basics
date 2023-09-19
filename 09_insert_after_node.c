#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

} *head = NULL;

void create(int *arr, int n)
{
    struct node *temp, *last;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = arr[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void insertAfterNode(struct node *p)
{
    int ind, d;
    printf("Enter your index and data \n");
    scanf("%d", &ind);
    scanf("%d", &d);
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = d;

    if (ind == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        for (int i = 0; i < ind - 1; i++)
        {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }

    // printf("After insert your linked list is \n");
    // while (p != NULL)
    // {
    //     printf("%d ", p->data);
    //     p = p->next;
    // }
}

void display(struct node *head)
{
    printf("After insert your linked list is \n");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 5};
    create(arr, 5);
    insertAfterNode(head);
    display(head);

    return 0;
}