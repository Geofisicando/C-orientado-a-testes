# Aula 0: Como realizar teste unitário com o Unity

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

O nosso curso irá utilizar o compilador gcc, você pode instalar o gcc no Linux Ubuntu com o seguinte comando:

```sh
sudo apt install gcc
```

Iremos também utilizar o programa make e arquivos Makefile para automatizar os testes com o Unity. Você pode instalar o make no
Linux Ubuntu com o comando a seguir:

```sh
sudo apt install make
```

Para realizar os testes, iremos utilizar o Unity framework de testes unitários em C. Iremos utilizar especificamente os arquivos da pasta
src do Unity framework. Para facilitar a sua aprendizagem, estes arquivos já estão organizados neste diretório em um diretório chamado Unity.
O conteúdo deste diretório Unity é dado a seguir:

```sh
Unity/
├── meson.build
├── unity.c
├── unity.h
└── unity_internals.h

0 directories, 4 files
```

Esta pasta já contém um exemplo simples de teste unitário com o Unity no arquivo 'test_exemplo.c'
que você poderá usar como template das suas suítes de teste. Para rodar o exemplo,
utilize o comando a seguir:

```sh
make
```
