# Aula 68 - Criar um separador de strings em C na forma chave=valor (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós iniciamos a implementação da função separadora de strings em C. Estas strings são passadas na forma 'chave=valor' e o caractere
'=' é utilizado como delimitador.
A lógica de separação do 'valor' é utilizar a função strchr para obter a referência para o delimitador na string e atribuir ao char ponteiro **eq**.

```c
eq = strchr(keyval,'=');
```
A função strchr retorna um ponteiro para a primeira ocorrência do caractere passado à função, keyval é a variável que armazena a nossa string
'chave=valor'. Assim, o char ponteiro eq irá apontar para o caractere '=' na string keyval.

 . | . | . | . | . | :arrow_down: | . | . | .| . | . |
 ---|---|---|---|---|---|---|---|---|---|---|
c | h | a | v | e | = | v | a | l | o | r |

Daí basta deslocar o ponteiro eq uma posição para frente com eq++ para obter a string 'valor'.

. | . | . | . | . | . | :arrow_down: | . | .| . | . |
 ---|---|---|---|---|---|---|---|---|---|---|
c | h | a | v | e | = | v | a | l | o | r |

# Aula 69 - Criar um separador de strings em C na forma chave=valor (Parte 2)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula finalizamos a implementação da função separadora de strings na forma 'chave=valor' utilizando o caractere '=' como delimitador.
Para calcular o comprimento da chave precisamos utilizar a aritmética de ponteiros. Para tanto, fazemos a diferença entre o ponteiro
eq (:arrow_down:, que aponta para o início da string 'valor') e o ponteiro keyval (:arrow_down_small:, que aponta para o começo da string 'chave=valor').

:arrow_down_small: | . | . | . | . | . | :arrow_down: | . | .| . | . |
 ---|---|---|---|---|---|---|---|---|---|---|
c | h | a | v | e | = | v | a | l | o | r |

Como cada caractere tem 1 byte de tamanho, esta diferença equivale ao tamanho da string 'chave' mais o delimitador '=' (6 bytes). Daí basta
alocar a memória correspondente e copiar a string utilizando a função memcpy:

```c
keylen = (size_t) (eq-keyval);
key = (char*) malloc(keylen*sizeof(char));
memcpy(key,keyval,keylen);
```

A string key ficará da seguinte maneira após a cópia:

:arrow_down_small: | . | . | . | . | . | :arrow_down: | . | .| . | . |
 ---|---|---|---|---|---|---|---|---|---|---|
c | h | a | v | e | = | v | a | l | o | r |

Daí basta substituir o caractere delimitador por '\0' para concluir a separação da chave:

```c
key[keylen-1]='\0';
```

Após a atribuição acima a string key ficará assim:

:arrow_down_small: | . | . | . | . | . | :arrow_down: | . | .| . | . |
 ---|---|---|---|---|---|---|---|---|---|---|
c | h | a | v | e | = | v | a | l | o | r |
