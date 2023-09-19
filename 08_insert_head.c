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

void inserthead(struct node *head)
{
    int d;
    printf("Enter your data you want to insert \n");
    scanf("%d", &d);
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = head;
    head = temp;

    printf("Your data %d is inserted at head and your list is now \n", d);
    while (head != NULL)
    {
        printf("%d--> ", head->data);
        head = head->next;
    }
}
// void display(struct node *head)
// {
//     if (head != NULL)
//     {
//         printf("%d --> ", head->data);
//         display(head->next);
//     }
// }
int main()
{
    int arr[6] = {2, 9, 6, 3, 8, 55};
    create(arr, 6);
    inserthead(head);

    return 0;
}
