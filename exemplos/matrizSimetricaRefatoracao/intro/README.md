# Aula 23 - Refatoração do código da matriz simétrica (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós começamos a estudar refatoração de código na prática. Iniciamos fazendo a análise do código da [matriz simétrica após a depuração](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/matrizSimetrica/final#aula-21---como-fazer-depura%C3%A7%C3%A3o-debug-do-c%C3%B3digo-matriz-sim%C3%A9trica-parte-5) e observamos os seguintes problemas:

- Nomes de função não são claros
- Nomes de variáveis não são claros
- Comentários confusos
- Código duplicado

Na etapa de refatoração os testes serão a nossa cobertura para fazermos alterações no código com segurança. Iremos fazer alterações no código e rodar os testes para verificar se estes continuam passando, ou seja, verificar se as alterações da refatoração não modificaram o comportamento do nosso código e este continua funcionando adequadamente.

Daí seguimos para a refatoração da função 'atribui' alterando os nomes de variável para torná-los mais claros. Observe o código da função 'atribui' antes da refatoração:

```c
void atribui (MatrizSimetrica* mat, int i, int j, float v) {
    int k;
    if (i<0 || i>=mat->dim || j<0 || j>=mat->dim) {
        printf("\nAtribuicao invalida.\n");
        exit(1);
    }
    
    if (i>=j)
        k = i*(i+1)/2 + j;
    else
        k = j*(j+1)/2 + i;
   
#ifdef LOGGING 
    printf("%s: i=%d j=%d k=%d\n",__FUNCTION__,i,j,k);
#endif
    mat->v[k] = v;
}
```

E após a refatoração, observe como os nomes de variáveis estão mais claros e trazem contexto para o código:

### Exemplo de uso

Você pode compilar e rodar este exemplo de uso com o programa 'make'. Para compilar e rodar o programa principal utilize o comando a seguir:

```sh
make
```

Para compilar e rodar os testes utilize o comando a seguir:

```sh
make test
```
