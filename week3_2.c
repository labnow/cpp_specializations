/* week3 honor homework: doubly linked list */
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
typedef struct list{int data; struct list* previous; struct list* next;} list;
list* create_list(int d)
{
    list* head = malloc(sizeof(list));
    head->data = d; 
    head->next = NULL;
    head->previous = NULL;
    return head;
}
list* add_to_front(int data, list* h)
{
    list* head = create_list(data);
    head->next = h;
    head->previous = NULL;
    (head->next)->previous = head;
    return head;
}
void print_list(list* l)
{   
    int i = 0;
    while(l != NULL)
    {
        printf("%d\t", l->data);
        i++;
        l = l->next;
        if(i % 5 == 0) printf("\n");
    }
}
void print_list_back_forth(list* l)
{
    // int i = 0;
    // int max = 10;
    int direction = 1;
    while(l != NULL)
    {
        printf("%d\t", l->data);
        // i++;
        // if(l->next;
        // l = l->next ? l->next != NULL : l->previous;
        if(l->next == NULL) // reach end
        {
            printf("\nswitch direction\n");
            direction = 0;
        }
        if(direction == 1)
            l = l->next;
        else
            l = l->previous;
        // if(i % 5 == 0) printf("\n");
        
    }
}
void swap_list(list* l1, list* l2)
{
    int temp = l2->data;
    l2->data = l1->data;
    l1->data = temp;
}
void delete_element(list* l)
{
    if(l->next == NULL)
        (l->previous)->next = NULL;
    else if(l->previous == NULL)
        (l->next)->previous = NULL;
    else
    {
        (l->next)->previous = l->previous;
        (l->previous)->next = l->next;
    }
    // free up memory: TBD
}
void main(void)
{
    // generate random list
    int size = 100;
    int range = 49;
    srand((unsigned)time(NULL));
    list* head = create_list(rand() % range);
    for(int i = 1; i < size; i++)
    {
        head = add_to_front(rand() % range, head);
    }
    printf("random generated list\n");
    print_list(head);
    printf("\n");
    // sort
    for(int i = 0; i < size - 1; i++)
    {
        int swaped = 0;
        list* cursor = head;
        for(int j = 0; j < size - i - 1; j++)
        {
            if(cursor->data > (cursor->next)->data)
            {
                swap_list(cursor, cursor->next);
                swaped = 1;
            }
            cursor = cursor->next;
        }
        if(swaped == 0) break;
    }
    printf("sorted list\n");
    print_list(head);
    printf("\n");
    // remove dublicated
    // method 1
    list* current_element = head;
    list* element_to_compare = head->next;    
    while(element_to_compare != NULL)
    {
        if(current_element->data == element_to_compare->data)
        {
            delete_element(element_to_compare);
            element_to_compare = element_to_compare->next;
        }
        else
        {
            current_element = current_element->next;
            element_to_compare = element_to_compare->next;
        }
    }
    /* method 2
    list* current_element = head;
    while(current_element != NULL)
    {
        list* element_to_compare = current_element->next;
        while(element_to_compare != NULL)
        {
            // printf("current element %d <-> element_to_compare %d\n", current_element->data, element_to_compare->data);
            if(element_to_compare->data == current_element->data)
            {
                delete_element(element_to_compare);
                // if element_to_compare is leftmost element, break
                if(element_to_compare->next == NULL)
                    break;
            }
            element_to_compare = element_to_compare->next;
        }
        current_element=current_element->next;
    }
    */
    printf("sorted duplicate removed list\n");
    print_list(head);
    printf("\n");
}