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

void min(struct node *head)
{
    int min = head->data;
    while (head != NULL)
    {
        if (head->data < min)
        {
            min = head->data;
        }

        head = head->next;
    }

    printf("%d ", min);
}

int main()
{
    int arr[5] = {2, 4, 6, 3, 1};
    create(arr, 5);
    min(head);

    return 0;
}