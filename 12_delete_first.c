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

void deletehead()
{

    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
    while (head)
    {
        printf("%d ->", head->data);
        head = head->next;
    }
}

// void display(struct node *head)
// {
//     struct node *temp = head;
//     while (temp)
//     {
//         printf("%d ->", temp->data);
//         temp = temp->next;
//     }
// }

int main()
{
    int arr[5] = {55, 3, 4, 5, 6};
    create(arr, 5);
    deletehead();
    // display(head);

    return 0;
}
