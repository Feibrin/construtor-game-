#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class JogoAdivinhacao {
    
    private: 
      int numerosecreto;
      int tentativas;
    
    public:
      // Construtor da classe
      JogoAdivinhacao() {
          
        // Inicializa o gerador de números aleatórios com o tempo atual
        srand(time(0));
        
        // Gera um número aleatório entre 1 e 100 e armazena na variável numerosecreto
        numerosecreto = rand () % 100 + 1;
        
        // Inicializa a variável tentativas com 0
        tentativas = 0;
      }
      
    void jogar () {
        
      int palpite;
      
      // Repete o loop até o palpite ser igual ao número secreto
      do {
         cout << "Digite um numero entre 1 e 100: ";
         cin >> palpite;
         tentativas++;
         if (palpite > numerosecreto) {
            cout << "O numero secreto e menor!" << endl;
         } else if (palpite < numerosecreto) {
             cout << "O numero secreto e maior!" << endl;
         } else {
             cout << "Parabens! Voce acertou o numero em "
             << tentativas << " tentativas!" << endl;
            }
            
      } while (palpite != numerosecreto);
    }
};

int main() {
    // Cria uma instância da classe JogoAdivinhacao
    JogoAdivinhacao jogo;
    
    // Chama o método jogar da instância criada
    jogo.jogar();
    
    return 0;
}
