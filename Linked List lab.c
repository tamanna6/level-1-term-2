#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *head = NULL;

void Creation() {
    int data, ch = 1;
    struct Node *current, *temp;

    while (ch) {
        printf("Enter data: ");
        scanf("%d", &data);


        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->link = NULL;

        if (head == NULL) {
            head = temp;
            current = temp;
        } else {
            current->link = temp;
            current = temp;
        }

        printf("Do you want to continue (0/1)? ");
        scanf("%d", &ch);
    }
}

void Display() {
    struct Node *ptr = head;

    if (ptr == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->link;
    }
    printf("NULL\n");
}
void insertBeginning(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->link = head;
    head = newNode;
}
void insertEnd(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->link = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node *current = head;
    while (current->link != NULL) {
        current = current->link;
    }
    current->link = newNode;
}


int main() {
    Creation();
    int newData;
    printf("Enter data for the new node: ");
    scanf("%d", &newData);

    //insertBeginning(newData);
    Display();
   // insertEnd(newData);
    insertEnd(newData); // Insert a new node at the end

    printf("New node inserted at the end with data: %d\n", newData);
    Display();

    //int x;
   // printf("")

    return 0;
}




