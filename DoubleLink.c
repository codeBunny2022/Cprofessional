#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *nxt;
};
struct node *head = NULL, *tail;

// function to insert node
void create()
{
    int val, choice;
    struct node *temp, *newnode;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value you want to insert\n");
        scanf("%d", &newnode->data);
        newnode->nxt = 0;
        newnode->prev = 0;

        if (head == NULL)
        {
            temp = head = newnode;
        }
        else
        {
            temp->nxt = newnode;
            newnode->prev = temp;
            temp = newnode;
            newnode->nxt = tail;
        }
        printf("Enter choice (1 or 0)");
        scanf("%d", &choice);
    }
}

// function to display the values of linked list

void display()
{
    struct node *temp;
    temp = head;
    printf("Elements of Double Linked list are as follows...\n");
    while (temp != 0)
    {
        printf("%d \t", temp->data);
        temp = temp->nxt;
    }
}

void deleteBeg()
{
    struct node *temp;
    if (head == 0)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        head = head->nxt;
        head->prev = 0;
        free(temp);
    }
    printf("Beggning node is deleted\n");
}

// function to delete an element
/*void delete()
{
    int del;
    struct node *temp, *front, *back;
    temp = head;
    printf("Enter the value you want you delete!n\n");
    scanf("%d", &del);
    while (temp != 0)
    {
        if (temp->data == del)
        {
            front->prev = back;
            back->nxt = front;
        }
        back = temp;
        temp = temp->nxt;
    }
}
*/

void ReverseDLL()
{
    struct node *nextnode, *current;
    current = head;
    while (current != 0)
    {
        nextnode = current->nxt;
        current->nxt = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    current = head;
    head = tail;
    tail = current; 
}
void main()
{
    int opt;
    printf("The available operations are......\n0.EXIT\n1.INSERT NODE\n2.DISPLAY DOUBLE LINKED LIST\n");
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
        default:
            printf("INVALID CHOICE\n");
        }
        printf("Entre option again\n");
        scanf("%d", &opt);
    } while (opt);
}