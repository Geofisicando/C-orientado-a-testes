# Aula 70 - Como criar bibliotecas estáticas e dinâmicas em C (Parte 1)

[:arrow_up: Voltar](https://github.com/Geofisicando/C-orientado-a-testes#%C3%ADndice)

## O que é uma biblioteca?

Uma biblioteca é uma coleção de items que você pode chamar a partir de um programa.

## Vantagens

Você economiza tempo reutilizando código e garante menos bugs (outros estarão usando e mantendo a biblioteca)
As bibliotecas entram na parte da linkagem (montagem) do executável, parte final da compilação.

## Bibliotecas estáticas

O nome "estática" é uma referência ao fato de que a biblioteca permanecerá inalterada a menos que seja recompilada

## Vantagens

1. Não precisa incluir a biblioteca ao distribuir o executável

2. A linkagem é geralmente mais rápida que a de arquivos individuais

## Desvantagens

1. Se atualizar tem que recompilar todos

2. Todo programa que possuir uma cópia precisa ser atualizado
