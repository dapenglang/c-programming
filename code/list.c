/* Week 4/5: pointers, arrays-decay, and a tiny dynamic list.
   Build: gcc -Wall -Wextra code/list.c -o list && ./list
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node *next;
} Node;

/* prepend (caller keeps ownership before transfer) */
Node *push(Node *head, int v) {
    Node *n = malloc(sizeof(*n));
    if (!n) return head;
    n->val = v;
    n->next = head;
    return n;
}

void free_list(Node *head) {
    while (head) {
        Node *t = head;
        head = head->next;
        free(t);
    }
}

void print_list(const Node *head) {
    for (; head; head = head->next) printf("%d -> ", head->val);
    printf("NULL\n");
}

int main(void) {
    Node *lst = NULL;
    for (int i = 8; i >= 1; --i) lst = push(lst, i * i);
    print_list(lst);

    /* arrays decay to pointers; array[i] == *(array + i) */
    int arr[] = {10, 20, 30};
    int *p = arr;
    printf("arr[1] via pointer = %d\n", *(p + 1));

    free_list(lst);
    return 0;
}