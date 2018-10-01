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
 
    /* If linked list is not NULL then set the link of last node */
    if (*parent_ref != NULL) {
        while (temp->link != *parent_ref)
            temp = temp->link;
        temp->link = ptr1;
    }else
        ptr1->link = ptr1;
 
    *parent_ref = ptr1;
}

/* Delete function to delete the first occurence of given element from the list */
void delete(struct Node *start, int element) {

	/*If the list is empty*/
	if (start ==  NULL) {
		return;
	}

	/*Finding the node to delete*/
	struct Node *temp1 = start, *temp2;
	while (temp1->data != element) {
		/*If node isn't present in the list*/
		if (temp1->link == start) {
			printf("%s\n", "Given node not found!");
			break;
		}
		temp2 = temp1;
		temp1 = temp1->link;
	}

	/*If the node is found and is the only occurence*/
	if (temp1->link == start) {
		start = NULL;
		free(temp1);
		return;
	}

	/*If there is more than one occurence of the same node*/
	if (temp1 == start) {
		temp2 = start;
		while (temp2->link != start)
			temp2 = temp2->link;
		start = temp1->link;
		temp2->link = start;
		free (temp1);
	}

	/*If the node is the last element of the list*/
	else if (temp1->link == start) {
		temp2->link = start;
		free (temp1);
	} else {
		temp2->link = temp1->link;
		free (temp1);
	}

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
    delete(head, 2);
    return 0;
}
