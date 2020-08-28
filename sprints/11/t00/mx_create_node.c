#include "list.h"

t_list *mx_create_node(void *data);

t_list *head = NULL;
head = (t_list) *) malloc(sizeof(t_list));

if (head == NULL) {
    return 1;
}
