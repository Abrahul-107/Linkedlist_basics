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

void search(struct node *p)
{
    int key;
    printf("Enter your key you want to search \n");
    scanf("%d", &key);
    int c = 0;

    while (p != 0)
    {

        if (p->data == key)
        {
            printf("Your key is present in %d number position ", c + 1);
            break;
        }

        p = p->next;
        c++;
    }
}

int main()
{
    int arr[5] = {3, 4, 56, 7, 8};
    create(arr, 5);
    search(head);

    return 0;
}