#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

void Print(Node* head) {
        printf("~List: {");
    while(head != NULL) {
        printf("%d,", head->data);
        head = head->next;
    }
    printf("}\n\n");
}    

void Push(Node** ptr_head, int data) {
    Node* temp = (Node*)malloc(sizeof(Node));

    if(temp == NULL) {
            fprintf(stderr, "Unable to allocate memory for new node\n");
            exit(-1);
        }

    temp->data = data;
    temp->next = *ptr_head;
    *ptr_head = temp;
    printf("|| Pushed %d ||\n", data);
}

void Insert(Node** ptr_head, int data, int n)
{
    Node* temp1 = (Node*)malloc(sizeof(Node));
    
    if(temp1 == NULL) {
        fprintf(stderr, "Unable to allocate memory for new node\n");
        exit(-1);
    }

    temp1->data = data;
    temp1->next = NULL;
    if(n == 1) {
        temp1->next = *ptr_head;
        *ptr_head = temp1;
        printf("|| Inserted %d at beginning ||\n", data);
        return;
    }

    Node* temp2 = *ptr_head;
    for(int i = 0; i < n - 2; i++) {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    printf("|| Inserted %d at position [%d] ||\n", data, n);
}

void Append(Node** ptr_head, int data) {
    Node* temp = (Node*)malloc(sizeof(Node));

    if(temp == NULL) {
        fprintf(stderr, "Unable to allocate memory for new node\n");
        exit(-1);
    }

    temp->data = data;
    temp->next = NULL;

    if(*ptr_head == NULL) {
        *ptr_head = temp;
        printf("|| Added %d at beginning ||\n", data);
        return;
    }

    Node* current = *ptr_head;
    while(true) {
        if(current->next == NULL)
        {
            current->next = temp;
            printf("|| Appended %d ||\n", data);
            break;
        }
        current = current->next;
    };
}

void Delete(Node** ptr_head, int n) {      // Delete node at position
    Node* temp1 = *ptr_head;
    if(n == 1) {
        *ptr_head = temp1->next;    // Head now points to second node.
        printf("|| Deleted value %d at position [%d] ||\n", temp1->data, n);
        free(temp1);
        return;
    }

    for(int i = 0; i < n - 2; i++)
        temp1 = temp1->next;
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    printf("|| Deleted value %d at position [%d] ||\n", temp2->data, n);
    free(temp2);
}

void PromptPush(Node** ptr_head) {
    int x;
    printf("Enter value to push: ");
    scanf("%d", &x);
    Push(ptr_head, x);
}

void PromptInsert(Node** ptr_head) {
    int x,n;
    printf("Enter data to insert: ");
    scanf("%d", &x);
    printf("Enter position to insert: ");
    scanf("%d", &n);
    Insert(ptr_head, x, n);
}

void PromptAppend(Node** ptr_head) {
    int x;
    printf("Enter data to append: ");
    scanf("%d", &x);
    Append(ptr_head, x);
}

void PromptDelete(Node** ptr_head) {
    int n;
    printf("Enter a position to delete: ");
    scanf("%d", &n);
    Delete(ptr_head, n);
}

int main(void) {
    Node* head = NULL;
    PromptAppend(&head);
    Print(head);
    PromptPush(&head);
    Print(head);
    PromptInsert(&head);
    Print(head);
    PromptDelete(&head);
    Print(head);
    return 0;
}
