#include <iostream> 
#include <vector> 
#include <algorithm>
#include <string> 
using namespace std; 

int main() { 
      int numerodealunos, alunosorteadok; // N e K, respectivamente
      vector<string> alunosparticipantes; // string para guardar os nomes dos alunos
      cin >> numerodealunos >> alunosorteadok;  // entrando com o número de alunos participantes
      for (int i = 0; i < numerodealunos;i++)  // iniciando uma repetição para adicionar a quantidade de alunos equivalente a variável N (numerodealunos)
      {
         string nomesdosalunos;
         cin >> nomesdosalunos; 
         alunosparticipantes.push_back(nomesdosalunos); //adiciona o nome dos alunos no vetor 
      } 
      sort(alunosparticipantes.begin(), alunosparticipantes.end()); //sorteando aluno
      cout << alunosparticipantes[alunosorteadok-1] << endl; // aluno sorteado
      
return 0; 
} 

//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49

