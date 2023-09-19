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

void insert_last(struct node *head)
{
    struct node *last, *app;
    int d;
    printf("Enter your data you want to insert\n");
    scanf("%d", &d);

    app->data = d;
    app->next = NULL;

    last = (struct node *)malloc(sizeof(struct node));
    last = head;
    while (last != NULL)
    {
        last = last->next;
    }
   
    last->next = app;
    last = app;

    printf("After insert your linked list is \n");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

// void display(struct node *head)
// {
//     if (head != NULL)
//     {
//         printf("%d ", head->data);
//         display(head->next);
//     }
// }

int main()
{
    int arr[5] = {6, 7, 8, 9, 1};
    create(arr, 5);
    insert_last(head);
    //display(head);

    return 0;

    
}