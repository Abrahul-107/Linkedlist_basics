#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void create(int *arr, int n)
{
    int i;
    struct node *last, *temp;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = arr[0];
    head->next = NULL;
    last = head;

    for (i = 1; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct node *head, int max)
{
    while (head != NULL)
    {
        if (head->data > max)
        {
            max = head->data;
        }
        head = head->next;
    }

    printf("%d ",max);
    
}
int main()
{
    int arr[5] = {2, 5, 3, 9, 12};
    create(arr, 5);
    display(head, 0);

    return 0;
}