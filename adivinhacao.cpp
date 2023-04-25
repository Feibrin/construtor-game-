#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class JogoAdivinhacao {
    
    private: 
      int numerosecreto;
      int tentativas;
    
    public:
      JogoAdivinhacao() {
          
        srand(time(0));
        numerosecreto = rand () % 100 + 1;
        tentativas = 0;
      }
      
    void jogar () {
        
      int palpite;
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
    JogoAdivinhacao jogo;
    jogo.jogar();
    return 0;
}
    
/* Acredito que o construtor possa ser utilizado em jogos para passar os parametros e estruturas de um objeto do jogo*/
