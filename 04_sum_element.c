#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int summ(struct node *head)
{
    if (head != NULL)
    {

        return summ(head->next) + head->data;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    struct node *head, *temp, *last;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = arr[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < 5; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

    int sum = 0;

    int ans = summ(head);
    printf("%d ", ans);

    return 0;
}
