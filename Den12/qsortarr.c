#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    long data;
    struct Node *next;
}Node;

void print_ll(Node *head){
    if(!head){
        perror("Empty linked list\n");
        return ;
    }
    Node* curNode = head;
    while (curNode!=NULL){
        
        printf("%ld\n",curNode->data);
        curNode = curNode->next;
    }
}

void push_back(Node **head, long new_data){
    Node *new_node = malloc(sizeof(Node));
    if(!new_node){
        perror("Push back: Could not malloc\n");
        exit(-1);
    }
    new_node->data = new_data;
    new_node->next = NULL;
    Node *last_node = *head;
    if(*head == NULL){
        *head = new_node;
        return;
    }
    while (last_node->next !=NULL)
    {
        last_node= last_node->next;

    }
    last_node->next = new_node;
}

Node *head1;
void pop_front(Node **head_p){
    if(!(*head_p)){
        perror("Pop front: Empty linked list !\n");
        return;
    }
    Node *tmp = *head_p;
    *head_p = (**head_p).next;
    free(tmp);

}

int main(){
  /* Node *a=malloc(sizeof(Node)),
        *b=malloc(sizeof(Node)),
        *c=malloc(sizeof(Node)),
        *d=malloc(sizeof(Node));
    a->data = 5;
    a->next = b;
    b->data = 8;
    b->next = c;
    c->data = 3;
    c->next = d;
    d->data = 12;
    head1 = a;
    

    Node *e = malloc(sizeof(Node));
    e->data = 1;
    e->next = NULL;
    d->next = e;*/
    push_back(&head1,5);
    print_ll(head1);
    printf("\n");
    pop_front(&head1);
    pop_front(&head1);
    pop_front(&head1);
    pop_front(&head1);
    pop_front(&head1);
    pop_front(&head1);
    push_back(&head1,5);
    push_back(&head1,6);
    push_back(&head1,7);
    print_ll(head1);
    
    /*free(a);
    free(b);
    free(c);
    free(d);
    free(e);*/
    


    return 0;
}