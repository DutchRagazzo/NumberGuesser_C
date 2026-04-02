# NumberGuesser_C
Jogo de adivinhação em linguagem C com número aleatório, níveis de dificuldade e sistema de pontuação, desenvolvido como prática no curso inicial da Alura.
# 🎯 Jogo da Adivinhação em C

Este projeto é um jogo simples de adivinhação desenvolvido em linguagem C, onde o jogador deve descobrir um número secreto gerado aleatoriamente pelo sistema.

## 📚 Contexto

Este código foi desenvolvido como parte do aprendizado inicial em C, com base no curso:

👉 Introdução à Programação com C - Parte 1 (Alura)

Durante o desenvolvimento, o projeto foi construído seguindo a orientação do instrutor, com adaptações e melhorias feitas ao longo da prática.

## 🎮 Como funciona

* O jogador escolhe um nível de dificuldade:

  * Fácil → 20 tentativas
  * Médio → 15 tentativas
  * Difícil → 10 tentativas
* Um número secreto entre 0 e 30 é gerado aleatoriamente
* A cada tentativa:

  * O jogador insere um número
  * O jogo informa se o número secreto é maior ou menor
  * A pontuação é atualizada com base na diferença entre o chute e o número secreto

## 🧮 Sistema de Pontuação

* O jogador começa com **1000 pontos**
* A cada erro, perde pontos com base na fórmula:

```
pontos -= abs(chute - numeroSecreto) / 2.0
```

## 🚀 Como executar

### Compilar:

```
gcc jogo.c -o jogo
```

### Executar:

```
./jogo
```

*(No Windows, pode ser necessário usar `jogo.exe`)*

## 💡 Aprendizados

* Uso de variáveis e tipos primitivos
* Estruturas condicionais (`if`, `else`)
* Estruturas de repetição (`for`)
* Funções da biblioteca padrão (`rand`, `srand`, `time`)
* Entrada e saída com `scanf` e `printf`
* Manipulação básica de pontuação

## 🛠️ Observações

* O projeto foi desenvolvido com foco educacional
* Algumas correções e ajustes foram realizados durante o aprendizado para melhorar o funcionamento do código

## 👨‍💻 Autor

Desenvolvido por Gabriel Holanda da Silva
