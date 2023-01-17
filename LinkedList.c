#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
// function to insert node
void create()
{
    struct node *newNode, *temp;
    int choice = 1;
    while (choice)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data:\n");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if (head == NULL)
        {
            temp = head = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Enter the choice (0 or 1)\n");
        scanf("%d", &choice);
    }
}
void traverse()
{
    struct node *temp;
    temp = head;
    printf("The linked list is as follows.\n");
    do
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    } while (temp != NULL);
}
void delete()
{
    struct node *temp, *prev;
    temp = head;
    int val, optn;
    while (optn)
    {
        printf("Enter the value to be deleted\n");
        scanf("%d", &val);
        while (temp->next != 0)
        {
            prev = temp;
            if (temp->data == val)
            {
                prev->next = temp->next;
                free(temp);
                exit(0);
            }
            temp = temp->next;
        }
        printf("Enter the choice (0 or 1)\n");
        scanf("%d", &optn);
    }
}
void reverse()
{
    struct node *curr, *prev, *nxt;
    prev = 0;
    curr = nxt = head;
    while (nxt != 0)
    {
        nxt = nxt->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
}
void main()
{
    int opt;
    printf("The available operations are......\n0.EXIT\n1.INSERT NODE\n2.TRAVERSE LINKED LIST\n3.DELETE A NODE\n4.REVERSE LINKED LIST\n");
    scanf("%d", &opt);
    do
    {
        switch (opt)
        {
        case 1:
            create();
            break;
        case 2:
            traverse();
            break;
        case 3:
            delete ();
            break;
        case 4:
            reverse();
            break;
        default:
            printf("INVALID CHOICE\n");
        }
        printf("Entre option again\n");
        scanf("%d", &opt);

    } while (opt);
}