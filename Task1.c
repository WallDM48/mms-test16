#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* last = NULL;

void init_Cll(Node *head)
{
    int number;
  
    Node* temp = head;
    temp = (Node*)malloc(sizeof(Node));
  
   
    printf("Enter number you want insert :\n");
    scanf("%d", &number);
  
    
    if (last == NULL) {
        temp->data = number;
        temp->next = temp;
        last = temp;
    }
  
   
    else {
        temp->data = number;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void print(Node *cll)
{
    
    if (last == NULL){
        printf("\nList is empty\n");
    }
    
    
        Node* temp = cll;
        temp = last->next;
        do {
            printf("\nAdr = %p Data = %d Next adr = %p" ,temp,temp->data,temp->next);
            temp = temp->next;
        } while (temp != last->next);
    
}
struct Node* insertAfter(struct Node *cll, int skipCount, int newElem){
  
    Node *temp, *n;
  
    temp = last->next;
    int i = 0;
    do {
  
        if (i == skipCount) {
            n = (Node*)malloc(sizeof(Node));

            n->data = newElem;
            n->next = temp->next;
            temp->next = n;
  
            if (temp == last)
                last = n;
            break;
        }
        else{
            temp = temp->next;
        }
        i++;

    } while (temp != last->next);
}



int main(){
    int N;
    Node *a = malloc(sizeof(Node));
    puts("Insert number of elements");
    scanf("%d",&N);

    for(int i =0; i < N; i++){
        init_Cll(a);
    }
    print(a);
    puts("\n");

    insertAfter(a,1,5);
    puts("\n");

    print(a);
    puts("\n");

    free(a);
    return 0;
}