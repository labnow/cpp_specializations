#include<stdio.h>
#include<stdlib.h>

typedef struct list{int data; struct list* next;} list;
list* create_list(int d)
{
    list* head = malloc(sizeof(list));
    head->data = d; 
    head->next = NULL;
    return head;
}
list* add_to_front(int d, list* h)
{
    list* head = create_list(d);
    head->next = h;
    return head;
}
list* array_to_list(int d[], int size)
{
    list* head = create_list(d[0]);
    for(int i = 0; i < size; i++)
    {
        head = add_to_front(d[i], head);
    }
    return head;
}
void print_list(list* l)
{
    while(l != NULL)
    {
        printf("%d\t", l->data);
        l = l->next;
    }
}
void swap_list(list* l1, list* l2)
{
    int temp = l2->data;
    l2->data = l1->data;
    l1->data = temp;
}
int count(list* h)
{
    int cnt = 0;
    while (h!=NULL)
    {
        cnt++;
        h = h->next;
    }
    return cnt;
}
void delete(list* elem, list **prev, list **hd)
{
    if(*hd == *prev)
        *hd = elem->next;
    else
        (*prev)->next = elem->next;
    free(elem);
}
void delete_list(list *h)
{
    list* temp;
    if(h!=NULL)
    {
        temp = h;
        delete_list(h = h->next);
        free(temp);
    }
}
void concat(list* h1, list* h2)
{
    if(h1==NULL)
        h1 = h2;
    else if(h1->next==NULL)
        h1->next = h2;
    else
        concat(h1->next, h2);
}
int main()
{
    list list_of_int;
    list* head = NULL;
    int data[6] = {2,3,5,7,8,9};
    head = array_to_list(data, 6);
    print_list(head);
    swap_list(head, head->next);
    printf("\n");
    print_list(head);
    printf("\n");
    return 0;
}