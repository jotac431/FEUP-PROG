#include "Header.h"

int jogador = 1;    //  turno 1

bool verTurno(string a, int jogador) {  //  verifica se o input corresponde ao turno

    if (a == "exit") return true;

    if (jogador == 1) {

        if ((a != "A") && (a != "B") && (a != "C") && (a != "D") && (a != "E") && (a != "F")) {

            cout << endl << "Jogada invalida! Insere um dos seguintes valores ('A','B','C','D','E','F')" << endl << endl;
            return false;
        }
        else
            return true;
    }

    if (jogador == 2) {

        if ((a != "a") && (a != "b") && (a != "c") && (a != "d") && (a != "e") && (a != "f")) {

            cout << endl << "Jogada invalida! Insere um dos seguintes valores ('a','b','c','d','e','f')" << endl << endl;
            return false;
        }
        else
            return true;
    }
}


bool gameOver(int p1, int p2) { //  verifica se há final de jogo e dá print do vencedor e score boards

    if (p1 > 24) {  //   vitória player 1

        system("cls");
        cout << "PLAYER 1 WINS !!!" << endl << endl;
        cout << "Player 1 Score: " << p1 << endl << endl;
        cout << "Player 2 Score: " << p2;
        return true;
    }

    if (p2 > 24) {  //  vitória player 2

        system("cls");
        cout << "PLAYER 2 WINS !!!" << endl << endl;
        cout << "Player 1 Score: " << p1 << endl << endl;
        cout << "Player 2 Score: " << p2;
        return true;
    }

    if ((p2 == 24) && (p1 == 24)) { //  empate

        system("cls");
        cout << "ITS A DRAW !!!" << endl << endl;
        cout << "Player 1 Score: " << p1 << endl << endl;
        cout << "Player 2 Score: " << p2;
        return true;
    }

    return false;
}

void começarJogo() {    //  função que junta e ordena todas as funçoões

    int p1 = 0; //  pontos iniciais
    int p2 = 0;
    
    string a;   //  input jogada
    
    while (true) {  //  repetição das funções até se verificar final de jogo ou input "exit"

        if (jogador == 1) cout << endl << endl << "Player 1 turn ('A','B','C','D','E','F'): " << endl << endl;
        if (jogador == 2) cout << endl << endl << "Player 2 turn ('a','b','c','d','e','f'): " << endl << endl;
        
        cin >> a;
          
        while (!verTurno(a, jogador)) cin >> a; //  verifica se a jogada corresponde ao turno
        
        if (a == "exit") break; //  sair
        
        if (jogador == 1) p1 = p1 + jogo(a, jogador);   //  soma de pontos
        if (jogador == 2) p2 = p2 + jogo(a, jogador);
        
        if (gameOver(p1, p2)) break;    //  verificação de fim de jogo
        
        jogador = turn(jogador);    //  troca o turno
        
        system("cls");  //  console clear
        
        initBoard();    //  constroi board
        
        printBoard(p1, p2); //  print do board
    }
}