#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

void create(int *arr, int n)
{
    int i;
    struct Node *temp, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = arr[0];
    head->next = NULL;
    last = head;

    for (i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ->", p->data);
        p = p->next;
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    create(arr, 5);
    display(head);

    return 0;
}