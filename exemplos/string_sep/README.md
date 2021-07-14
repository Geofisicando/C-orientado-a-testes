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
