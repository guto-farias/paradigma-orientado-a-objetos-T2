// Campo.cpp
#include "Campo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

#define LARGURA 20
#define ALTURA 34

Campo::Campo() {
    std::srand(std::time(nullptr));
}

void Campo::iniciar() {
    int contVermelho = 1, contAzul = 1;
    gerarBolim();
    std::cout << "Posicao do bolim -> x: " << bolimX << ", y: " << bolimY << "\n";
    std::cout << "-------------------------------------------------------------\n";
    rodada(contVermelho, contAzul);
    rodada(contVermelho, contAzul);
    calcularPontuacao();
}

void Campo::gerarBolim() {
    bolimX = 1 + (std::rand() % LARGURA);
    bolimY = 3 * (1 + (std::rand() % ALTURA));
}

void Campo::rodada(int& contV, int& contA) {
    int forca;

    std::cout << "\nVermelho: Escolha a forca da jogada (ex: 38 eh o maximo): ";
    std::cin >> forca;
    Ball v("V" + std::to_string(contV++), 1);
    v.setPosicao(1 + (std::rand() % LARGURA), std::min(100, std::max(0, forca * 3 + (std::rand() % 11 - 5))));
    bolas.push_back(v);
    v.exibir();
    exibirCampo();

    std::cout << "\nAzul: Escolha a forca da jogada (ex: 38 eh o maximo): ";
    std::cin >> forca;
    Ball a("A" + std::to_string(contA++), 2);
    a.setPosicao(1 + (std::rand() % LARGURA), std::min(100, std::max(0, forca * 3 + (std::rand() % 11 - 5))));
    bolas.push_back(a);
    a.exibir();
    exibirCampo();
}

void Campo::exibirCampo() const {
    std::string campo[ALTURA][LARGURA];
    for (int i = 0; i < ALTURA; ++i)
        for (int j = 0; j < LARGURA; ++j)
            campo[i][j] = ".";

    int linha_bolim = (bolimY / 3) - 1;
    if (linha_bolim >= 0 && linha_bolim < ALTURA && bolimX >= 1 && bolimX <= LARGURA)
        campo[linha_bolim][bolimX - 1] = "B";

    for (const auto& b : bolas) {
        int linha = (b.getY() / 3) - 1;
        int coluna = b.getX() - 1;
        if (linha >= 0 && linha < ALTURA && coluna >= 0 && coluna < LARGURA)
            campo[linha][coluna] = b.getId().substr(0, 3);
    }

    std::cout << "\nCAMPO DE JOGO:\n\n";
    for (int i = ALTURA - 1; i >= 0; --i) {
        std::cout << std::setw(3) << (i + 1) * 3 << " | ";
        for (int j = 0; j < LARGURA; ++j)
            std::cout << std::setw(3) << campo[i][j];
        std::cout << "\n";
    }
    std::cout << "     +------------------------------------------------------------->\n";
    std::cout << "       ";
    for (int j = 1; j <= LARGURA; j++) std::cout << j % 10 << " ";
    std::cout << "  (X)\n\n";
}

void Campo::calcularPontuacao() {
    int menor = 100, timeVencedor = 0;
    for (const auto& b : bolas) {
        int dist = std::abs(b.getY() - bolimY);
        if (dist < menor) {
            menor = dist;
            timeVencedor = b.getCor();
        }
    }

    std::cout << "\nEquipe ";
    if (timeVencedor == 1)
        std::cout << "vermelha pontuou!\n";
    else
        std::cout << "azul pontuou!\n";
} 