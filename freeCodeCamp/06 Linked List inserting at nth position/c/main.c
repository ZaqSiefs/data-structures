#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
} Node;

// Node* head;

void Insert(Node** ptr_head, int data, int n)
{
    Node* temp1 = (Node*)malloc(sizeof(Node*));
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1) {
        temp1->next = *ptr_head;
        *ptr_head = temp1;
        return;
    }
    Node* temp2 = *ptr_head;
    for(int i = 0; i < n - 2; i++) {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void Print(Node* head)
{
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main(void)
{
    Node* head = NULL;
    Insert(&head, 2,1);    //List: 2
    Insert(&head, 3,2);    //List: 2,3
    Insert(&head, 4,1);    //List: 4,2,3
    Insert(&head, 5,2);    //List: 4,5,2,3
    Print(head);

    return 0;
}