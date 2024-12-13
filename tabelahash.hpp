#ifndef TABELA_HASH
#define TABELA_HASH

#include "registro.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class tabelahash
{
private:
    size_t tamanho;

    registro **tabela;

public:
    tabelahash();
    ~tabelahash();

    size_t getTamanho() const;
    registro** getTabela() const;
    void setTamanho(size_t tamanho);
    void setTabela(registro** tabela);
    void insere(std::string nome, string ano, int ocorrencias);
    void imprime_tabela();
    void imprime_x(int x);
    registro *pega_registro(std::string nome, string ano, int ocorrencias);

    size_t acha_registro(std::string nome, string ano, int ocorrencias);
};

#endif TABELA_HASH