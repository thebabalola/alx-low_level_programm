#ifndef lists_h
#define lists_h

/**
 * struct list_s - Defines a node in a singly linked list
 * @str: Pointer to a dynamically allocated string
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: Represents a node in a singly linked list
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void before_main() __attribute__((constructor));

#endif
