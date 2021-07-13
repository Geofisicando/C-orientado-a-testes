# Aula 3 - Como fazer arquivo Makefile para automatizar testes unitários do unity

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

Nesta aula nós aprendemos a automatizar a compilação e os testes com arquivos Makefile. O programa 'make' roda os arquivos Makefile
e retorna o status de execução para o terminal do Shell por meio da variável de ambiente $? (0 se todos os testes passaram e diferente de 0 se um teste falhou).
Se você precisar de mais detalhes sobre Makefile e Shell Script assista os seguintes cursos do canal:

- [Curso Makefile](https://www.youtube.com/watch?v=Tt3BLZCVjAE&list=PLLCFxfe9wkl-tCZvSCbzQGcNv9nSN5ZAP&index=1)
- [Shell Script profissional](https://www.youtube.com/watch?v=HRRfgufskaw&list=PLLCFxfe9wkl-k0w-c_1i4sdZPUYt0Yc2P&index=1&t=3s)

## Exemplo de uso

Neste diretório há um exemplo de Makefile para automatizar testes com o Unity.
Você pode compilar e rodar o exemplo de uso neste diretório com o comando a seguir:

```sh
make
```

O programa make irá executar as diretivas de compilação para o arquivo 'test_example.c' e rodar o binário executável com os testes.
