#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node* next;
} Node;


void Push(Node** pointerToHead, int x)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = *pointerToHead;
    *pointerToHead = temp;
}

void Print(Node* head) {
    printf("List is: ");
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main(void)
{
    Node* head = NULL;
    printf("How many numbers?: ");
    int n, x;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &x);
        //  head = Push(head, x);
        Push(&head, x);
        Print(head);
    }

    return 0;
}