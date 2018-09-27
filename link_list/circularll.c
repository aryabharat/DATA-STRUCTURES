// C program to demonstrate traversal in a circular linked list

#include<stdio.h> /* Library for printf and scanf */
#include<stdlib.h> /* General purpose standard library */
 
/* Defining structure */
struct Node {
    int data;
    struct Node *link;
};
 
/* Push function to insert a node at the begining of the list */
void push(struct Node **parent_ref, int data) {
    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *parent_ref;
    ptr1->data = data;
    ptr1->link = *parent_ref;
 
    /* If linked list is not NULL then set the next of last node */
    if (*parent_ref != NULL) {
        while (temp->link != *parent_ref)
            temp = temp->link;
        temp->link = ptr1;
    }else
        ptr1->link = ptr1;
 
    *parent_ref = ptr1;
}
 

/* Main function to push the elements */
int main() {
    /* Initialization of list */
    struct Node *head = NULL;
 
    /* Created linked list will be 11->2->56->12 */
    push(&head, 1);
    push(&head, 5);
    push(&head, 2);
    push(&head, 2);
 
    return 0;
}
