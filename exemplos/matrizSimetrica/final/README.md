# Aula 21 - Como fazer depuração (Debug) do código: Matriz simétrica (Parte 5)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós finalizamos a depuração do programa da matriz simétrica acrescentando mais um caso de testes para uma matriz 3 por 3. Também
condicionamos as mensagens de logging das funções acessa e atribui à definição da macro LOGGING na [linha 18 de matriz.c](https://github.com/Geofisicando/C-orientado-a-testes/blob/5d8adb8042c14bcadffbbcd6e6097bc399542967/exemplos/matrizSimetrica/final/matriz.c#L18). Para exibir as mensagens de logging
basta descomentar esta linha.

Por fim, podemos modificar o programa principal em 'main.c' para exibir os elementos da matriz simétrica em um looping ao invés de testar
se a matriz é simétrica ou não, pois os testes já são feitos pela suíte de testes. Veja a [nova versão do programa principal](https://github.com/Geofisicando/C-orientado-a-testes/blob/main/exemplos/matrizSimetrica/final/main.c).

## Exemplo de uso

Você pode compilar e rodar este exemplo de uso com o programa 'make'. Para compilar e rodar o programa principal utilize o comando
a seguir:

```sh
make
```

Para compilar e rodar os testes utilize o comando a seguir:

```sh
make test
```
