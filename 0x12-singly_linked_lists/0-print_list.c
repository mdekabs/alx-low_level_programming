#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - malloc
 * @len: length of string
 * #next: points of the next node
 *
 * Description: singly linked list not structure
 */

typeof struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;
