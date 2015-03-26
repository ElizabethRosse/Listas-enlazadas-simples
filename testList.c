#include <stdlib.h>
#include <stdio.h>
#include "list.h"

int main(void){
	int i;
	struct node_struct * l = NULL;
	for(i = 0; i < 100; i++){
		struct node_struct * nuevo ;
		nuevo = newNode(i);
		nuevo->next = l;
		l = nuevo;
	}
	printf("\n");
	printf("lista Original: \n");
	print_list(l);
	printf("Lista reversa: \n");
	print_list(reversa(l));
	printf("El elemento máximo de la lista: %d\n", max(l));
	printf("La longitud de la lista con función iterativa: %d\n", len_ite(l));
	printf("La longitud de la lista con función recuersiva: %d\n", len_rec(l));
	
	struct node_struct * next;

	while(l != NULL){
		next = l->next;
		free(l);
		l = next;
	}

	return 0;
}
