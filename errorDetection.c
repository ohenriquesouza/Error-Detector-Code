//código detecção de erro - PCD - Henrique Souza Fagundes 5º período

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    
    int PORCENTAGEM_DE_ERRO_DESEJADA = 10;
    
    string entrada;
    int soma = 0, soma2 = 0;
    cout<<"Entre com uma cadeia: "<<endl;
    getline(cin, entrada);
    for(int i = 0; i < entrada.size(); i++){
        soma = soma + entrada[i];
    }
    char ruido = soma % 256;
    entrada = entrada + ruido;
    cout<<"Saida 1º programa: "<<entrada<<endl;
    for(int i = 0; i < entrada.size(); i++){
        int chance = 0;
        chance = 1+rand()%100;
        if(chance >=0 && chance <= PORCENTAGEM_DE_ERRO_DESEJADA){cout<<"Erro Detectado! Chance = "<<PORCENTAGEM_DE_ERRO_DESEJADA<<"%"<<endl; entrada[i] = entrada[i] + chance;}
    }
    cout<<"Saida 2º programa: "<<entrada<<endl;
    for(int i = 0; i < entrada.size(); i++){
        soma2 = soma2 + entrada[i];
    }
    char ruido2 = soma2%256;

    cout<<"Ruido primeiro programa: "<<ruido<<endl;
    cout<<"Ruido segundo programa: "<<ruido2<<endl;
    
    
    

    return 0;
}
