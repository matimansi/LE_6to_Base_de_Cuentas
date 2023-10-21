
#include <stdio.h>
#include "free_up_memory.h"

void free_up_memory (pointer_to_account *beginning)
{
	pointer_to_account actual;
	printf("Releasing memory...\n");
	while (*beginning != NULL)
	{
		actual = *beginning;
		*beginning = (*beginning)->next;
		free(actual->email);
		free(actual->password);
		free(actual->nickname);
		free(actual);
	}
	printf("Memory released");
}
