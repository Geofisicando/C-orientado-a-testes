# Aula 74 - As chamadas de sistema wait e exec no Linux

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós refizemos o exemplo da
[Aula 73](https://github.com/Geofisicando/C-orientado-a-testes/tree/main/exemplos/syscalls/fork#aula-73---criar-processos-no-linux-a-chamada-de-sistema-fork)
utilizando as chamadas de sistema wait e exec.

## Exemplo de uso

Para compilar e rodar o exemplo de uso deste diretório basta utilizar o seguinte comando:

```sh
make
```

A saída esperada do comando é a seguinte:

```
gcc -g exemplo.c -o exemplo.x
./exemplo.x
Estou no processo pai PID=8636 Esperando meu filho PID=8637
Estou no processo filho PID=8637 Meu pai tem PID=8636
```

O processo Filho irá executar por 5 segundos e irá exibir a seguinte mensagem:

```
Olá galera do canal!
```

Daí o processo Pai irá encerrar a sua execução:

```
Pai encerrou...
```
