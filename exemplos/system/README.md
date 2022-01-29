# Aula 75 - Como rodar um comando ou script do shell em um programa em C

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

A função system é a forma mais fácil de, a partir de um programa em C, se conseguir executar outro programa.
Esta função aceita como argumento um comando da shell, executa-o e devolve ao programa o valor retornado pelo comando executado.

Basicamente a função system faz um fork para criar um processo filho.
O processo filho usa a system call exec para correr uma shell, shell essa que interpreta o comando contido no argumento da função
system e executa-o.
Além disso a função system depois de lançar o processo filho executa a system call wait para esperar que a shell termine a execução do comando.
É através desta system call que tem acesso ao valor retornado pelo comando executado pela shell.

# Aula 76 - A função system e a chamada de sistema waitpid

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

A chamada de sistema wait tem múltiplas limitações e, para cobrir recursos mais avançados,
a função waitpid deve ser utilizada. Ou seja, se um processo cria vários filhos e o pai precisa monitorar um filho específico,
apenas waitpid pode fazer isso

O waitpid leva três argumentos, o primeiro dos quais é o número de identificação do processo (pid).
O PID pode ter vários valores predefinidos com diferentes efeitos, mas, neste caso, vamos apenas mencionar -1 e >0.
O valor -1 pode ser passado para monitorar qualquer processo filho que muda seu estado primeiro, que é usado para implementar
a funcionalidade wait. >0 implica que o valor deve ser o ID do processo real que foi retornado da função fork, que por sua vez
é usado para monitorar apenas o processo filho específico. O segundo argumento é do tipo ponteiro int e devemos declarar uma
variável inteira para passar seu endereço para a função. waitpid, por outro lado, irá armazenar as informações de status do
filho na variável int fornecida, que então pode ser decodificada usando as macros predefinidas. O último argumento é do tipo
int e é usado para especificar determinados eventos de processo filho a serem monitorados, além dos padrões.

## Exemplos de uso

Para compilar os exemplos de uso deste diretório utilizando o Makefile basta utilizar o seguinte comando:

```sh
make
```

Daí basta executar os arquivos executáveis gerados na pasta atual com:

```sh
./exemplo.x
```

E depois:

```sh
./system.x
```

### Referências

- [Maria Joao Nicolau - A função system](http://marco.uminho.pt/~joao/Socae/node18.html)
- [Delfstack - Use a função waitpid em C](https://www.delftstack.com/pt/howto/c/waitpid-in-c/)
