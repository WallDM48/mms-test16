#include"linkedlist.h"
int main() {
    Node *head_linked_list_1 = NULL;
    
    push_back(&head_linked_list_1,100);
    push_back(&head_linked_list_1,200);
    push_back(&head_linked_list_1,300);
    push_front(&head_linked_list_1,400);
    push_front(&head_linked_list_1,500);
   
   /*pop_back(&head_linked_list_1);
    pop_back(&head_linked_list_1);
    pop_back(&head_linked_list_1);
    pop_back(&head_linked_list_1);*/
    
    print_ll(head_linked_list_1);

    return 0;
}
