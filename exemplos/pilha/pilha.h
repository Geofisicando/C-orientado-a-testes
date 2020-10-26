struct sNo{
	int n;
	struct sNo* prox;
};

typedef struct sNo NO;

typedef NO* PILHA;

void init(PILHA* p){
	*p = NULL;
}

int empty(PILHA p){
	return (p==NULL);
}
