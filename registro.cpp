#include "registro.hpp"

registro::registro(std::string nome, std::string ano, int ocorrencias){
    this->nome = nome;
    this->ano = ano;
    this->ocorrencias = ocorrencias;
}
registro::~registro(){
    delete nome;
    delete ano;
    delete ocorrencias;
}
void registro::setNome(std::string nome){
    this->nome = nome;
}
std::string registro::getNome(){
    return this->nome;
}
void registro::setAno(std::string ano){
    this->ano = ano;
}
std::string registro::getAno(){
    return this->ano;
}
void registro::setOcorrencias(int ocorrencias){
    this->ocorrencias = ocorrencias;
}
std::string registro::getOcorrencias(){
    return this->ocorrencias;
}
void registro::setPosicao(size_t posicao){
    this->_posicao = posicao;
}
size_t registro::getPosicao(){
    return this->_posicao;
}
