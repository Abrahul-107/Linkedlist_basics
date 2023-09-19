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
        temp->next = temp;
        last = temp;
    }
}

void insert_at_sort(struct node *ptr)
{
    int d;
    printf("Enter your data you want to insert ");
    scanf("%d", &d);
    struct node *new, *slow;
    slow = NULL;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = d;
    new->next = NULL;

    if (head == NULL)
    {
        head = new;
    }
    else
    {

        while (ptr != NULL)
        {

            if (new->data < ptr->data)
            {
                new->data = d;
                new->next = ptr->next;
                slow->next = new;
            }

            slow = ptr;
            ptr = ptr->next;
        }
    }

    // while (head != NULL)
    // {
    //     printf("%d ", head->data);
    //     head = head->next;
    // }
}

void display(struct node *p)
{
    if (p != NULL)
    {
        printf("%d -->", p->data);
        display(p->next);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    create(arr, 5);
    insert_at_sort(head);
    display(head);

    return 0;
}