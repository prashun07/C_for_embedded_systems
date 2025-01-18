#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *node_ptr = (struct node *)malloc(sizeof(struct node));

    if (node_ptr == NULL)
    {
        printf("Failed to allocate memory.");
        exit(0);
    }
    else
    {
        node_ptr->data = 2;
        node_ptr->next = NULL;
    }
    printf("node data: %d", node_ptr->data);
    free(node_ptr);

    return 0;
}