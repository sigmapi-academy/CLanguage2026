#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void addNodeAtStart(struct Node **head, int value){
    struct Node*newNode = (struct Node *)calloc(1, sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    newNode->next = *head;
    *head = newNode;
}

void addNodeAtEnd(struct Node **head, int value){
    struct Node*newNode = (struct Node *)calloc(1, sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    struct Node *t = *head;
    for(;t->next;t = t->next);
    t->next = newNode;
}

void insertNodeAfterANode(struct Node **head, int nv, int data){
    //first find the nv node
    //Then insert the node after that node
}


void insertNodeBeforeANode(struct Node **head, int nv, int data){
    //first find the nv node
    //Then insert the node before that node
}

void insertNodeAtPosition(struct Node **head, int pos, int data){
    //Go to the position 
    //insert the new node at that position
    //the position must be valid for the insetion
    //otherwise print appropriate message
}


void display(struct Node *head){
    if(head == NULL){
        printf("\nList is empty!\n");
        return;
    }
    printf("\n");
    for(struct Node *t = head; t ; t = t->next){
        printf("==>%d",t->data);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    struct Node *head = NULL;
    int data, choice;
    while(1){
        printf("\nPress 1 to add Node at head");
        printf("\nPress 2 to add Node at end");
        printf("\nPress 3 to display the list");
        printf("\nPress 0 to exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter any int value: ");
            scanf("%d", &data);        
            addNodeAtStart(&head,data);
            break;
        case 2:
            printf("Enter any int value: ");
            scanf("%d", &data);        
            addNodeAtEnd(&head,data);
            break;
        case 3:
            display(head);
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
