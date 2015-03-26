/*
  UNAM. Facultad de Ciencias. 
  Modelado y programación
  Muñiz Rivas Elizabeth
 */

#include <stdio.h>
#include "list.h"
#include <stdlib.h>
#include <assert.h>

struct node_struct * newNode(int v){
	struct node_struct *n = (struct node_struct*) malloc(sizeof(struct node_struct));
	assert(n != NULL);
	(*n).value = v;
	n->value = v;
	n->next = NULL;
	return n;
}

/* Elimina un nodo de la lista*/
void deleteNode(struct node_struct *n){
	free(n);
}
/*Imprime la lista de forma bonita*/
void print_list(struct node_struct* l){
	printf("[");
	for(; l != NULL; l= l->next){
		printf("%d%c ", l->value, l->next != NULL ? ',': ']');
	}
	printf("\n");
}
/*Regresa un entero con la longitud de la lista(método iterativo)*/
int len_ite(struct node_struct *l){
  int i = 0;
  while (l != NULL){
    l = l->next;
    i++;
  }
  return i;
}
/*Regresa un entero con la longitud de la lista(método recursivo)*/
int len_rec(struct node_struct *l){
  if (l == NULL)
    return 0;
  else if (l->next == NULL)
    return 1;
  else
    return 1+(len_rec(l->next));
}
/*Regresa un entero con el elemento máximo de la lista*/
int max(struct node_struct *l){
  int max = l->value;
  while(l != NULL){
    if(l->value > max)
      max = l->value;
    l = l->next;
  }
  return max;
}
/*Dada una lista, regresa la reversa de la lista sin modificar la original */
struct node_struct* reversa(struct node_struct *l){
  struct node_struct* reversa = NULL;
  while(l != NULL){
    struct node_struct* nodo = newNode(l->value);
    nodo->next = reversa;
    reversa = nodo;
    l = l->next;
  }
  return reversa;
}
