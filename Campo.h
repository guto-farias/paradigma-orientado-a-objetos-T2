// Campo.h
#ifndef CAMPO_H
#define CAMPO_H

#include "Ball.h"
#include <vector>

class Campo {
public:
    Campo();
    void iniciar();

private:
    std::vector<Ball> bolas;
    int bolimX, bolimY;

    void gerarBolim();
    void rodada(int& contVermelho, int& contAzul);
    void exibirCampo() const;
    void calcularPontuacao();
};

#endif