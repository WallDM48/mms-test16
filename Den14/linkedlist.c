
#include"linkedlist.h"

void print_ll(Node *head) {
    if(!head) {
        printf("Empty linked list\n");
        return;
    }
    Node *curNode = head;
    while(curNode) {
        printf("addr: %p,  data: %ld,   next: %p\n",
            curNode, curNode->data, curNode->next);
        curNode = curNode->next;
    }
}
// Make head pointer to pointer so that
// We can change fields of NODE struct
// We can change value of pointer to first element
void push_back(Node **head, long new_data) {
    Node *new_node = malloc(sizeof(Node));
    if(!new_node) {
        perror("Push_back: Could not malloc\n");
        exit(-1);
    }
    new_node -> data = new_data;
    new_node -> next = NULL;

    // If linked list is empty - then adress of first element is NULL
    if(*head == NULL) {
        *head = new_node;
        return;
    }

    Node *last_node = *head;
    while(last_node->next != NULL) {
        last_node = last_node->next;
    }
    last_node -> next = new_node;
}

void pop_front(Node **head_pp) {
    // Error is linked list is empty
    if(!(*head_pp)) {
        perror("Pop_front: Linked list is empty\n");
        return;
    }
    Node *deleted_node = *head_pp;
    *head_pp = (*head_pp)->next;
    free(deleted_node);
}
// add new node at the front of linked list
void push_front(Node **head_pp, long new_data){
    // Create new node - dynamic 
    Node *new_node = malloc(sizeof(Node));
    if(!new_node) {
        perror("Malloc failed\n");
        exit(-1);
    }
    new_node->data = new_data;
    new_node->next = (*head_pp);
    *head_pp = new_node;

}
void pop_back(Node **head_pp){
    if(!(*head_pp)) {
        printf("Empty linked list\n");
        exit(-1);
    }

    Node *second_to_last, *last;
    //load adresses to variables
    last = *head_pp;
    second_to_last = NULL;
    while(last->next !=NULL){
        second_to_last = last;
        last = last->next;
    }
    
    if(last != *head_pp){
    second_to_last->next = NULL;
    }
    else{
    *head_pp = NULL;
    }
    free(last);
}
void reverse(Node **head_pp){
    

}