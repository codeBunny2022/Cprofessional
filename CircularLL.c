#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nxt;
};
struct node *head;

void create()
{
    int choice = 1;
    struct node *newNode, *temp;
    while (choice)
    {
        newNode = (struct node *)(malloc(sizeof(struct node)));
        printf("Enter the data you want to insert\n");
        scanf("%d", &newNode->data);
        if (head == 0)
        {
            temp = head = newNode;
        }
        else
        {
            temp->nxt = newNode;
            temp = newNode;
            temp->nxt = head;
        }
        printf("Enter the choice (0 or 1)\n");
        scanf("%d", &choice);
    }
}

void display()
{
    struct node *temp;
    temp = head;
    printf("Elements of Circualr linked list are...\n");
    printf("%d \t", temp->data);
    temp = temp->nxt;
    while (temp != head)
    {
        printf("%d \t", temp->data);
        temp = temp->nxt;
    }
}

void rev()
{
    struct node *temp, *prev, *forw;
    prev = head;
    temp = head->nxt;
    do
    {
        forw = temp->nxt;
        temp->nxt = prev;
        prev = temp;
        temp = temp->nxt;
        forw = forw->nxt;
    } while (temp != head);
}

void main()
{
    int opt;
    printf("The available operations are......\n0.EXIT\n1.INSERT NODE\n2.TRAVERSE LINKED LIST\n3.REVERSE THE DOUBLY LINKED LIST\n");
    scanf("%d", &opt);
    do
    {
        switch (opt)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            rev();
            break;
        default:
            printf("INVALID CHOICE\n");
        }
        printf("Entre option again\n");
        scanf("%d", &opt);

    } while (opt);
}