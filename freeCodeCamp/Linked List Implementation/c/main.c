#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

void printList(Node* head) {
    printf("~List: {");
    while(head != NULL) {
        printf("%d,", head->data);
        head = head->next;
    }
    printf("}\n\n");
}

void push(Node** ptrToHead, int data) {
    Node* temp = (Node*)malloc(sizeof(Node));

    if(temp == NULL) {
        fprintf(stderr, "No space to allocate for push()");
        exit(1);
    }

    temp->data = data;
    temp->next = *ptrToHead;
    *ptrToHead = temp;
    printf("|| Pushed %d || \n", data);
}

void insert(Node** ptrToHead, int data, int position) {
    Node* temp1 = (Node*)malloc(sizeof(Node));

    if(temp1 == NULL) {
        fprintf(stderr, "No space to allocate for push()");
        exit(1);
    }

    temp1->data = data;
    temp1->next = NULL;
    if(position == 1) {
        temp1->next = *ptrToHead;
        *ptrToHead = temp1;
        printf("|| Inserted %d at beginning ||\n", data);
        return;
    }

    Node* temp2 = *ptrToHead;
    for(int i = 0; i < position - 2; i++) {
        temp2 = temp2->next;
    }

    temp1->next = temp2->next;
    temp2->next = temp1;
    printf("|| Inserted %d at position %d ||\n", data, position);
}

void append(Node** ptrToHead, int data) {
    Node* temp1 = (Node*)malloc(sizeof(Node));

    if(temp1 == NULL) {
        fprintf(stderr, "No space to allocate for push()");
        exit(1);
    }
    
    temp1->data = data;
    temp1->next = NULL;
    if(*ptrToHead == NULL) {
        *ptrToHead = temp1;
        printf("|| Started list with %d ||\n", data);
        return;
    }

    Node* temp2 = *ptrToHead;
    while(temp2->next != NULL) {
        temp2 = temp2->next;
    }
    temp2->next = temp1;

    printf("Appended %d\n", data);
}

void delete(Node** ptrToHead, int position) {
    Node* temp1 = *ptrToHead;

    if (position < 1) {
        fprintf(stderr, "Not a valid position.\n");
        exit(1);
    }

    if (position == 1) {
        *ptrToHead = temp1->next;
        free(temp1);
        printf("|| Deleted item at start ||\n");
        return;
    }

    for(int i = 0; i < position - 2; i++) {
        temp1 = temp1->next;
    }

    Node* temp2 = temp1->next;

    temp1->next = temp2->next;
    printf("|| Deleted value %d at position [%d] ||\n", temp2->data ,position);
    free(temp2);
}

void promptPush(Node** ptrToHead) {
    int x = 0;
    printf("Enter value to push: ");
    scanf("%d", &x);
    push(ptrToHead, x);
    printList(*ptrToHead);
}

void promptInsert(Node** ptrToHead) {
    int x, n;
    printf("Enter data to insert: ");
    scanf("%d", &x);
    printf("Enter position to insert: ");
    scanf("%d", &n);
    insert(ptrToHead, x, n);
    printList(*ptrToHead);
}

void promptAppend(Node** ptrToHead) {
    int x;
    printf("Enter data to insert: ");
    scanf("%d", &x);
    append(ptrToHead, x);
    printList(*ptrToHead);
}

void promptDelete(Node** ptrToHead) {
    int n;
    printf("Enter position to delete: ");
    scanf("%d", &n);
    delete(ptrToHead, n);
    printList(*ptrToHead);
}


int main(void) {
    Node* head = NULL;
    promptPush(&head);
    promptInsert(&head);
    promptAppend(&head);
    promptDelete(&head);
    return 0;
}