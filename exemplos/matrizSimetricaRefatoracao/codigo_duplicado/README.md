# Aula 24 - Refatoração do código da matriz simétrica (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós abstraímos os blocos if na função atribui a partir da implementação de funções. Esta é uma técnica de refatoração de código muito utilizada e que facilita a manutenção e reutilização do código. Vamos analisar o antes e depois da refatoração da função.

Antes, a função atribui possui dois blocos if. O primeiro é para verificar se os índices da linha e da coluna passados pelo usuário à função são válidos, ou seja, se estão dentro dos limites da dimensão da matriz. O segundo bloco if é utilizado para conveter os índices da linha i e coluna j no índice do vetor que armazena os elementos da matriz simétrica.

```c
void atribui (MatrizSimetrica* mat, int linha, int coluna, float f) {
    int indice;
    if (linha<0 || linha>=mat->dim || coluna<0 || coluna>=mat->dim) {
        printf("\nAtribuicao invalida.\n");
        exit(1);
    }
    
    if (linha>=coluna)
        indice = linha*(linha+1)/2 + coluna;
    else
        indice = coluna*(coluna+1)/2 + linha;
   
#ifdef LOGGING 
    printf("%s: i=%d j=%d k=%d\n",__FUNCTION__,linha,coluna,indice);
#endif
    mat->v[indice] = f;
}
```

# Aula 25 - Refatoração do código da matriz simétrica (Parte 3)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós removemos totalmente o código duplicado das funções 'acessa' e 'atribui' no nosso exemplo de implementação do código da matriz simétrica abstraindo o código duplicado em duas funções, 'verificaLinhaColunaValidas' e 'retornaIndiceVetor'. Assim não precisamos repetir os blocos if em cada uma das funções para acessar os elementos da matriz simétrica ou obter o índice do vetor, basta realizar a chamada à função correspondente. Isto torna a leitura do código e a manutenção mais simples.

### Exemplo de uso

Você pode compilar e rodar este exemplo de uso com o programa 'make'. Para compilar e rodar o programa principal utilize o comando a seguir:

```sh
make
```

Para compilar e rodar os testes utilize o comando a seguir:

```sh
make test
```
