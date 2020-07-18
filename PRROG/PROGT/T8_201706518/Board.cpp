#include "Header.h"


string board[6][8];   //  esquema do tabuleiro

vector<int> val;   //   vetor das casas


void vetor() {   //   vetor das casas dos jogadores [0:6]->Player 1 , [6:11]->Player 2

    for (int i = 0; i < 12; i++) {  //  pontos pelas 12 casas
        
        val.push_back(4);   //  todas as casa começam com 4 pontos
    }
}

int turn(int jogador) {   //   troca o turno do jogador
    
    if (jogador == 1) return 2;
    if (jogador == 2) return 1;
}


int jogo(string a, int jogador) {  //  base do jogo

    int i;
    string input;
    int p;

    if (a == "A") i = 0;    //   indices correspondestes ás casas
    if (a == "B") i = 1;
    if (a == "C") i = 2;
    if (a == "D") i = 3;
    if (a == "E") i = 4;
    if (a == "F") i = 5;
    if (a == "a") i = 6;
    if (a == "b") i = 7;
    if (a == "c") i = 8;
    if (a == "d") i = 9;
    if (a == "e") i = 10;
    if (a == "f") i = 11;

    int n = val[i];   //   valor da casa selecionada
    
    val.at(i) = 0;  //  muda valor da casa selecionada para 0 
    
    int old;

    for (int j = 1; j <= n; j++) {  //  adiciona 1 ás casas á frente

        if ((i + j) <= 11) {

            old = val[i + j];
            val.at(i + j) = old + 1;
        }
        if ((i + j) > 11) { //  caso ultrapasse o range do vetor dá reset ao indice usando um remainder

            old = val[(i + j) % 12];
            val.at((i + j) % 12) = old + 1;
        }
    }

    if (jogador == 2) { //  roubo de pontos pelo jogador 2

        if (i + n > 11) {   //  rouba apenas quando passa o range do vetor

            if ((val[(i + n) % 12] == 2) || (val[(i + n) % 12] == 3)) { //  rouba apenas com valores 2 e 3

                if (((i + n) % 12) >= 0 && ((i + n) % 12) <= 5) {   //  rouba apenas nas casas do adversário

                    cout << endl << "Possivel roubar pontos. Roubar (Y). Nao roubar (N)" << endl;
                    cin >> input;

                    while ((input != "Y") && (input != "N")) {  //  exception Y / N
                        cout << endl << "Selecao invalida. Roubar (Y). Nao roubar (N)" << endl;
                        cin >> input;
                    }
                    if (input == "Y") { //  rouba pontos e retorna esse valor

                        p = val[(i + n) % 12];
                        val[(i + n) % 12] = 0;  //  casa roubada muda valor para 0
                        return p;
                    }
                }
            }
        }
    }

    if (jogador == 1) { //  roubo de pontos pelo jogador 1

        if (i + n <= 11) {

            if ((val[i + n] == 2) || (val[i + n] == 3)) {

                if ((i + n) >= 6 && (i + n) <= 11) {    //  rouba apenas nas casas do adversário

                    cout << endl << "Possivel roubar pontos. Roubar (Y). Nao roubar (N)" << endl;
                    cin >> input;
                    if (input == "Y") {

                        p = val[i + n];
                        val[i + n] = 0;
                        return p;
                    }
                }
            }
        }

        if (i + n > 11) {   //  caso os pontos distribuidos dao uma volta completa

            if ((val[(i + n) % 12] == 2) || (val[(i + n) % 12] == 3)) {

                if (((i + n) % 12) >= 6 && ((i + n) % 12) <= 11) {

                    cout << endl << "Possivel roubar pontos. Roubar (Y). Nao roubar (N)" << endl;
                    cin >> input;
                    if (input == "Y") {

                        p = val[(i + n) % 12];
                        val[(i + n) % 12] = 0;
                        return p;
                    }
                }
            }
        }
    }
    
    return 0;   //  retorna 0 caso não haja roubos de pontos
}

void initBoard() {

    int a = 0;
    
    for (int i = 1; i < 7; i++) {  // make PLAYER 1 row
        
        board[3][i] = to_string(val[a]);    //  transforma os valores int do vetor em string 
        a++;
    }
    for (int i = 6; i > 0; i--) {  // make PLAYER 2 row
        
        board[2][i] = to_string(val[a]);
        a++;
    }

    for (int i = 0; i < 6; i++) {  // make left side wall

        board[i][0] = '|';
    }

    for (int i = 0; i < 6; i++) {  // make right side wall

        board[i][7] = '|';
    }

    for (int i = 0; i < 1; i++) {  // make PLAYER 2 houses

        board[i][1] = 'f';
        board[i][2] = 'e';
        board[i][3] = 'd';
        board[i][4] = 'c';
        board[i][5] = 'b';
        board[i][6] = 'a';
    }

    for (int i = 5; i < 6; i++) {  // make PLAYER 1 houses

        board[i][1] = 'A';
        board[i][2] = 'B';
        board[i][3] = 'C';
        board[i][4] = 'D';
        board[i][5] = 'E';
        board[i][6] = 'F';
    }

    for (int i = 1; i < 7; i++) {  // make top separator

        board[1][i] = '-';
    }

    for (int i = 1; i < 7; i++) {  // make bottom separator

        board[4][i] = '-';
    }
}


void printBoard(int p1, int p2) {

    for (int i = 0; i < 6; i++) {   //   print board
        
        cout << endl << endl << endl;
        
        for (int j = 0; j < 8; j++) {

            cout << "   " << board[i][j] << "   ";
        }
    }
    
    cout << endl << endl << endl;
    
    cout << "PLAYER 1 POINTS : " << p1 << endl << endl << endl; //  print player 1 points
    
    cout << "PLAYER 2 POINTS : " << p2 << endl;  //  print player 2 points
}