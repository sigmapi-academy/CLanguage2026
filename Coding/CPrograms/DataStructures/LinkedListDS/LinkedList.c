#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void addNodeAtStart(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)calloc(1, sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    newNode->next = *head;
    *head = newNode;
}

void addNodeAtEnd(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)calloc(1, sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *t = *head;
    for (; t->next; t = t->next)
        ;
    t->next = newNode;
}

void deleteNodeAtHead(struct Node **head)
{
    if (*head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }
    struct Node *t = *head;
    printf("\nDeleted node: %d", t->data);
    *head = (*head)->next;
    t->next = NULL;
    free(t);
}

void deleteNodeAtTail(struct Node **head)
{
    if (*head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }
    // single node
    struct Node *t = *head, *p;
    if ((*head)->next == NULL)
    {
        *head = NULL;
        printf("\nDeleted node: %d", t->data);
        free(t);
        return; // local t will be deleted after this.
    }

    // Case of more nodes
    for (p = t; t->next; p = t, t = t->next)
        ;
    // now t is pointing to the last node and p is pointing
    //  to the previous node
    p->next = NULL; // last node is disconnected
    printf("\nDeleted Node: %d", t->data);
    free(t); // Node is deleted.
}

void deleteANode(struct Node **head, int sv)
{
    if (*head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }
    
    struct Node *t = *head, *p;
    // First node
    if (t->data == sv)
    {
        *head = (*head) ->next;
        printf("\nDeleted node: %d", t->data);
        free(t);
        return; // local t will be deleted after this.
    }
    for (p = t; t; p = t, t = t->next)
    {
        if (t->data == sv)
        {
            printf("\nDeleted node: %d", t->data);
            p->next = t->next;
            t->next = NULL;
            free(t);
            return;
        }
    }
    printf("\n%d is not present in the list", sv);
}

void deleteNodeAfterANode(struct Node **head, int sv)
{
    // if second node is present then deletion is possible
    // hw
}

void deleteNodeBeforeANode(struct Node **head, int sv)
{
    // First node cannot be deleted.
    // hw
}

void insertNodeAfterANode(struct Node **head, int nv, int data)
{
    // first find the nv node
    // Then insert the node after that node
    if (*head == NULL)
    {
        printf("\nList is empty!");
        return;
    }
    struct Node *t = *head;
    for (; t; t = t->next)
    {
        if (t->data == nv)
        {
            struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
            newNode->data = data;
            newNode->next = t->next;
            t->next = newNode;
            return;
        }
    }
    printf("\n %d is not found in the list", nv);
}

void insertNodeBeforeANode(struct Node **head, int nv, int data)
{
    // first find the nv node
    // Then insert the node before that node
}

void insertNodeAtPosition(struct Node **head, int pos, int data)
{
    // Go to the position
    // insert the new node at that position
    // the position must be valid for the insetion
    // otherwise print appropriate message
}

void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }
    printf("\n");
    for (struct Node *t = head; t; t = t->next)
    {
        printf("==>%d", t->data);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    struct Node *head = NULL;
    int data, choice;
    while (1)
    {
        printf("\nPress 1 to add Node at head");
        printf("\nPress 2 to add Node at end");
        printf("\nPress 3 to display the list");
        printf("\nPress 4 to add node after an existing node.");
        printf("\nPress 5 to delete node from head");
        printf("\nPress 6 to delete node from tail");
        printf("\nPress 7 to delete a node entered by the user");
        printf("\nPress 0 to exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter any int value: ");
            scanf("%d", &data);
            addNodeAtStart(&head, data);
            break;
        case 2:
            printf("Enter any int value: ");
            scanf("%d", &data);
            addNodeAtEnd(&head, data);
            break;
        case 3:
            display(head);
            break;
        case 4:
            int sv;
            printf("Enter search value: ");
            scanf("%d", &sv);
            printf("Enter data value for node: ");
            scanf("%d", &data);
            insertNodeAfterANode(&head, sv, data);
            break;
        case 5:
            deleteNodeAtHead(&head);
            break;
        case 6:
            deleteNodeAtTail(&head);
            break;
        case 7:
            printf("Enter search value: ");
            scanf("%d", &sv);
            deleteANode(&head, sv);
            break;
        case 0:
            printf("\nGood bye!\n");
            exit(choice);

        default:
            printf("\nWrong option selected!\n");
        }
    }
    return 0;
}
