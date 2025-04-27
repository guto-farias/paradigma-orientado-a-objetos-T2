// Ball.h
#ifndef BALL_H
#define BALL_H

#include <string>

class Ball {
public:
    Ball(std::string id = "", int cor = 0);

    void setPosicao(int x, int y);
    int getX() const;
    int getY() const;
    int getCor() const;
    std::string getId() const;
    void exibir() const;

private:
    std::string id;
    int cor;
    int x, y;
};

#endif