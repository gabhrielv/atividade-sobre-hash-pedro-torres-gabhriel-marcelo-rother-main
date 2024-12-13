#include "tabelahash.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    tabelahash tabela;
    ifstream file("GABHRIEL FONSECA VELASCO - NationalNames.csv");
    if (!file.is_open()) {
        std::cerr << "Erro ao abrir o arquivo." << std::endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string item;
        vector<string> row;
    
        while (getline(ss, item, ',')) {
            row.push_back(item);

        }
        
        if (row.size() >= 3) {
            string nome = row[0];
            string ano = row[1];
            int ocorrencias = stoi(row[2]);
            tabela.insere(nome, ano, ocorrencias);
        }
    }

    file.close();
    return 0;
}