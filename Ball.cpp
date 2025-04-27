// Ball.cpp
#include "Ball.h"
#include <iostream>

Ball::Ball(std::string id, int cor) : id(id), cor(cor), x(0), y(0) {}

void Ball::setPosicao(int x, int y) {
    this->x = x;
    this->y = y;
}

int Ball::getX() const { return x; }
int Ball::getY() const { return y; }
int Ball::getCor() const { return cor; }
std::string Ball::getId() const { return id; }

void Ball::exibir() const {
    std::cout << "A bola " << id << ", da equipe " << cor
              << ", esta na posicao [" << x << "][" << y << "]." << std::endl;
}
