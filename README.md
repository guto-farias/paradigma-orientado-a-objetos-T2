# Jogo de Bocha em C++

**LINK DO VÍDEO SOLICITADO:** https://www.youtube.com/watch?v=bBcm_rmhVGA&t=5s

Este projeto implementa um jogo simples de **bocha** (ou bocce) entre duas equipes, desenvolvido utilizando **C++ com programação orientada a objetos**.
O objetivo é arremessar bolas tentando deixá-las o mais próximo possível do bolim (bola alvo).


---

## 🔍 Descrição

O jogo simula uma partida de bocha entre duas equipes. Primeiro, o bolim (bola-alvo B) é posicionado aleatoriamente no campo. Em seguida, cada equipe lança duas bolas alternadamente. O jogador escolhe uma força para o arremesso, que determina a posição final da bola no eixo Y, com um leve desvio aleatório. A posição X é definida aleatoriamente. Após os quatro lançamentos, o programa calcula qual bola ficou mais próxima do bolim no eixo Y e atribui a vitória à equipe correspondente. O campo é exibido graficamente a cada jogada e o placar é mostrado ao final.


---

## 🛠️ Como compilar

Caso o executável fornecido não funcione.
Para compilar o jogo, você precisa de um compilador C++ como o G++.

```bash
g++ -o jogo main.cpp Campo.cpp Ball.cpp
.\jogo
```

Isso depois de adicionar o MinGW nas variáveis de ambiente para ter o G++.

---

## 🕹️ Como jogar

1. O bolim(B) é posicionado aleatoriamente no campo (coordenadas X e Y).
2. Cada equipe (vermelha **V** e azul **A**) tem **duas jogadas alternadas**.
3. O jogador escolhe uma **força de lançamento** (inteiro), o valor 38 ou maior representa uma força potencial de chegar no limite do campo.
4. A bola é lançada com base na força escolhida e um desvio aleatório.
5. A cada jogada, o campo é atualizado e exibido com as bolas posicionadas.
6. Após as 4 jogadas (2 por equipe), a bola mais próxima do bolim no eixo **Y** define a equipe vencedora.
7. O placar é exibido ao final da partida.

---

## 📅 Funcionalidades

- Campo representado em texto com coordenadas.
- Arremesso com força influenciando a distância.
- Bolas com identificadores exclusivos (`V1`, `A2`, etc).
- Visualização do campo a cada rodada.
- Cálculo de pontuação com base na proximidade do bolim.
- Estrutura orientada a objetos com separação em classes (Ball e Campo).

---

## 📆 Exemplo de execução

```
Posição do bolim -> x: 4, y: 96
-------------------------------------------------------------

Vermelho: Escolha a força da jogada (ex: 38):
> 34

A bola V1, da equipe 1, está na posição [7][100].

[Campo exibido...]

Azul: Escolha a força da jogada (ex: 38):
> 36

A bola A1, da equipe 2, está na posição [15][96].

[Campo exibido...]

Equipe azul pontuou!
```

---

## 📁 Estrutura do projeto

- `main.cpp`: Arquivo principal para iniciar o jogo.
- `Ball.h` / `Ball.cpp`: Definição e implementação da classe `Ball` (representa uma bola de bocha).
- `Campo.h` / `Campo.cpp`: Definição e implementação da classe `Campo` (gerencia o campo e as regras do jogo).

---

## 📌 Observações

- O campo simula o eixo Y com escala de 3 em 3 para melhor visualização.
- O desvio aleatório imita a imprecisão do lançamento.
- O projeto pode ser expandido facilmente para adicionar novas regras ou modos de jogo, graças à estrutura orientada a objetos.


---




