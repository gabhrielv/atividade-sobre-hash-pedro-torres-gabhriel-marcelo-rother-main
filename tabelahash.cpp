#include "tabelahash.hpp"

tabelahash::tabelahash()
tabelahash::~tabelahash()

void std::registro::insere(std::string nome, string ano, int ocorrencias){
    size_t posicao = acha_registro(nome, ano, ocorrencias);
    if (posicao == -1){
        posicao = hash(nome, ano, ocorrencias);
        tabela[posicao] = new registro(nome, ano, ocorrencias);
    }
}
void std::registro::imprime_tabela(){
    for (size_t i = 0; i < tamanho; i++){
        if (tabela[i] != NULL){
            std::cout << tabela[i]->getNome() << " " << tabela[i]->getAno() << " " << tabela[i]->getOcorrencias() << std::endl;
        }
    }
    
}

void tabelahash::imprime_x(int x) {
    std::vector<registro*> registros;

    for (size_t i = 0; i < tamanho; i++) {
        if (tabela[i] != NULL) {
            registros.push_back(tabela[i]);
        }
    }

    std::sort(registros.begin(), registros.end(), [](registro* a, registro* b) {
        return a->getOcorrencias() > b->getOcorrencias();
    });

    for (int i = 0; i < x && i < registros.size(); i++) {
        std::cout << registros[i]->getNome() << " " << registros[i]->getAno() << " " << registros[i]->getOcorrencias() << std::endl;
    }
}


std::registro *registro::pega_registro(std::string nome, string ano, int ocorrencias){
    size_t posicao = acha_registro(nome, ano, ocorrencias);
    if (posicao != -1){
        return tabela[posicao];
    }
    return NULL;
}
size_t registro::acha_registro(std::string nome, string ano, int ocorrencias){
    size_t posicao = hash(nome, ano, ocorrencias);
    if (tabela[posicao] != NULL){
        return posicao;
    }
    return -1;
}
