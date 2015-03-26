struct node_struct{
	int value;
	struct node_struct* next;
};

struct node_struct * newNode(int v);

void deleteNode(struct node_struct *n);

void print_list(struct node_struct* l);

int len_ite(struct node_struct* l);

int len_rec(struct node_struct* l);

int max(struct node_struct* l);

struct node_struct * reversa(struct node_struct* l);
