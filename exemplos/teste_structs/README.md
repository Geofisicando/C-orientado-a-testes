# Aula 67 - Como testar vetores de structs em linguagem C utilizando o Unity

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a criar testes unitários para estruturas (structs) em C utilizando o Unity framework.
Para tanto, primeiro, criamos uma função para a inicialização da estrutura (struct) PESSOA, a função pessoa_init a seguir:

```c
void pessoa_init(PESSOA *p, char* nome, int idade, int cpf){
	int len = strlen(nome)+1;
	if(p->nome!=NULL) p->nome=NULL;
	p->nome = charalloc(len);
	strcpy(p->nome,nome);
	p->idade = idade;
	p->cpf = cpf;
}
```

Esta função recebe um ponteiro para a estrutura PESSOA e os dados nome, idade e cpf da pessoa para realizar a inicialização. Utilizamos
a função strlen da biblioteca 'string.h' para obter o tamanho da string nome passada e fazer a alocação dinâmica do nome da pessoa com a
função charalloc, para a alocação dinâmica de strings, implementada na [Aula 60](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/alloc#aula-60---criar-uma-fun%C3%A7%C3%A3o-de-aloca%C3%A7%C3%A3o-din%C3%A2mica-personalizada-em-c-parte-2).

A inicialização e utilização da estrutura PESSOA é trivial. Para criar um vetor de pessoas, basta utilizar a função de alocação dinâmica de structs
PESSOA implementada na [Aula 62](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/alloc#aula-62---aloca%C3%A7%C3%A3o-din%C3%A2mica-de-vetores-de-structs-em-c), como no exemplo a seguir, e depois inicializar cada elemento do vetor com pessoa_init.

```c
PESSOA *amigos;
amigos = pessoaalloc(2);
pessoa_init(amigos,"Dirack",29,90999);
pessoa_init(amigos+1,"Fulano",35,80888);
```

Os testes do Unity podem ser realizados para testar se os elementos do vetor foram inicializados corretamente. Daí é só utilizar
as macros básicas para testes unitários de strings e ints do Unity:

```c
TEST_ASSERT_EQUAL_STRING("Dirack",amigos[0].nome);
TEST_ASSERT_EQUAL(29,amigos[0].idade);
TEST_ASSERT_EQUAL(90999,amigos[0].cpf);

TEST_ASSERT_EQUAL_STRING("Fulano",amigos[1].nome);
TEST_ASSERT_EQUAL(35,amigos[1].idade);
TEST_ASSERT_EQUAL(80888,amigos[1].cpf);
```


## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o seguinte comando:

```sh
make
```
