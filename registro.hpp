#ifndef REGISTRO
#define REGISTRO

#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <string>

class registro
{
private:
    std::string nome;
    std::string ano;
    int    ocorrencias;
    size_t      _posicao;

public:
    registro(std::string nome, std::string ano, int ocorrencias);
    ~registro();

    void set_posicao(size_t posicao);

    //std::string nome();
    //size_t      posicao();
};

#endif REGISTRO
