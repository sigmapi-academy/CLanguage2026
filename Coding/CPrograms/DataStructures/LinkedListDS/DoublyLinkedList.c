#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void addNodeAtStart(struct Node **head, struct Node **tail, int value)
{
    // modified
    struct Node *newNode = (struct Node *)calloc(1, sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (*head == NULL)
    {
        *head = *tail = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void addNodeAtEnd(struct Node **head, struct Node **tail, int value)
{
    // modified
    struct Node *newNode = (struct Node *)calloc(1, sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (*head == NULL)
    {
        *head = *tail = newNode;
        return;
    }
    newNode->prev = *tail;
    (*tail)->next = newNode;
    *tail = newNode;
}

void deleteNodeAtHead(struct Node **head, struct Node **tail)
{
    // modified
    if (*head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }
    struct Node *t = *head;
    printf("\nDeleted node: %d", t->data);
    *head = (*head)->next;
    t->next = NULL;
    if (*head == NULL)
    {
        *tail = NULL;
    }
    else
    {
        (*head)->prev = NULL;
    }
    free(t);
}

void deleteNodeAtTail(struct Node **head, struct Node **tail)
{
    // modified
    if (*head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }
    // single node
    struct Node *t = *tail;

    if (*head == *tail)
    { // Case of one node
        *head = *tail = NULL;
    }
    else
    {
        *tail = (*tail)->prev;
        (*tail)->next = NULL;
        t->prev = NULL;
    }
    printf("\nDeleted Node: %d", t->data);
    free(t); // Node is deleted.
}

void deleteANode(struct Node **head, struct Node **tail, int sv)
{
    //Homework modify the code
    if (*head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }

    struct Node *t = *head, *p;
    // First node
    if (t->data == sv)
    {
        *head = (*head)->next;
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
void deleteNodeAfterANode(struct Node **head, struct Node **tail, int sv)
{
    //Homework modify the code
    // if second node is present then deletion is possible
    if (*head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }
    struct Node *t = *head;
    for (; t; t = t->next)
    {
        if (t->data == sv)
        {
            if (t->next == NULL)
            {
                printf("\n%d is the last node; no node exists after it.", sv);
                return;
            }
            struct Node *delNode = t->next;
            t->next = delNode->next;
            delNode->next = NULL;
            printf("\nDeleted node: %d", delNode->data);
            free(delNode);
            return;
        }
    }
    printf("\n%d is not present in the list", sv);
}
// void deleteNodeAfterANode(struct Node **head, int sv)
// {
//     // if second node is present then deletion is possible
//     // hw
// }

// void deleteNodeBeforeANode(struct Node **head, int sv)
// {
//     // First node cannot be deleted.
//     // hw
// }

void deleteNodeBeforeANode(struct Node **head, struct Node **tail, int sv)
{
    //Homework modify the code
    // First node cannot be deleted.
    if (*head == NULL)
    {
        printf("\nList is empty!\n");
        return;
    }
    if ((*head)->data == sv)
    {
        printf("\n%d is the first node; no node exists before it.", sv);
        return;
    }
    struct Node *t = (*head)->next;
    struct Node *p = *head;
    struct Node *pp = NULL;
    for (; t; pp = p, p = t, t = t->next)
    {
        if (t->data == sv)
        {
            if (p == *head)
            {
                *head = t;
            }
            else
            {
                pp->next = t;
            }
            printf("\nDeleted node: %d", p->data);
            p->next = NULL;
            free(p);
            return;
        }
    }
    printf("\n%d is not present in the list", sv);
}

void insertNodeAfterANode(struct Node **head, struct Node **tail, int nv, int data)
{
    //Homework modify the code
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

void insertNodeBeforeANode(struct Node **head, struct Node **tail, int nv, int data)
{
    //Homework modify the code
    // first find the nv node
    // Then insert the node before that node
}

void insertNodeAtPosition(struct Node **head, struct Node **tail, int pos, int data)
{
    //Homework modify the code
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

void displayReverse(struct Node *tail)
{
    if (tail == NULL)
    {
        printf("\nList is empty");
        return;
    }
    printf("\n");
    for (struct Node *t = tail; t; t = t->prev)
    {
        printf("==>%d", t->data);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    //modify the required cases
    struct Node *head = NULL;
    struct Node *tail = NULL;
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
        printf("\nPress 8 to delete a node after a given node");
        printf("\nPress 9 to delete a node before a given node");
        printf("\nPress 10 to display in reverse");
        printf("\nPress 0 to exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter any int value: ");
            scanf("%d", &data);
            addNodeAtStart(&head, &tail, data);
            break;
        case 2:
            printf("Enter any int value: ");
            scanf("%d", &data);
            addNodeAtEnd(&head, &tail, data);
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
            deleteNodeAtHead(&head, &tail);
            break;
        case 6:
            deleteNodeAtTail(&head, &tail);
            break;
        case 7:
            printf("Enter search value: ");
            scanf("%d", &sv);
            deleteANode(&head, sv);
            break;
        case 8:
            printf("Enter search value: ");
            scanf("%d", &sv);
            deleteNodeAfterANode(&head, sv);
            break;
        case 9:
            printf("Enter search value: ");
            scanf("%d", &sv);
            deleteNodeBeforeANode(&head, sv);
            break;
        case 10:
            displayReverse(tail);
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
