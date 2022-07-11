/* week3 homework option 1 */
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
typedef struct list{int data; struct list* next;} list;
list* create_list(int d)
{
    list* head = malloc(sizeof(list));
    head->data = d; head->next = NULL;
    return head;
}
list* add_to_front(int data, list* h)
{
    list* head = create_list(data);
    head->next = h;
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
void swap_list(list* l1, list* l2)
{
    int temp = l2->data;
    l2->data = l1->data;
    l1->data = temp;
}
void main(void)
{
    // generate random list
    int size = 100;
    int range = 1000;
    srand((unsigned)time(NULL));
    list* head = create_list(rand() % range);
    for(int i = 1; i < size; i++)
    {
        head = add_to_front(rand() % range, head);
    }
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
    print_list(head);
}