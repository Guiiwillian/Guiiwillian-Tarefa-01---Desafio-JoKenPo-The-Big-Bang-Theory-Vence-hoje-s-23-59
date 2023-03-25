#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

enum jogada {PEDRA, PAPEL, TESOURA};

int main() {
    cout << "Bem-vindo ao Jokenpo!\n";
    cout << "Escolha uma opcao:\n";
    cout << "0 - Pedra\n";
    cout << "1 - Papel\n";
    cout << "2 - Tesoura\n";

    int jogador;
    cin >> jogador;

    srand(time(0)); // inicializa o gerador de números aleatórios
    int computador = rand() % 3;

    if (jogador == computador) {
        cout << "Empate!\n";
    } else if (jogador == PEDRA && computador == TESOURA ||
               jogador == PAPEL && computador == PEDRA ||
               jogador == TESOURA && computador == PAPEL) {
        cout << "Voce venceu!\n";
    } else {
        cout << "Voce perdeu!\n";
    }

    return 0;
}

