#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
bool comp(int nA, int nB); 
int main() {
int EntradaPart, qntdecolocacoes, valores;

    vector<int> todososvalores;
    cin >> EntradaPart >> qntdecolocacoes; //inserir a quantidade de potua��es e a quantidade de coloca��es no ranking
    for(int i = 0; i < EntradaPart; i++) {
        cin >> valores; //inserir as pontua��es
        todososvalores.push_back(valores); //inserir valores no vetor
    }
    sort(todososvalores.begin(), todososvalores.end(), comp); //ordena��o das pontua��es
    for(int i = 0; i < qntdecolocacoes; i++) {
        cout << todososvalores[i] << endl; //sa�da das coloca��es do ranking
    }
    return 0;
}
 
bool comp(int nA, int nB) {
    if(nA > nB) {
        return true;
    } else {
        return false;
    }
}


//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49

