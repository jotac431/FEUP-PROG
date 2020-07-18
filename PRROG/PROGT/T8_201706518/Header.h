#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

//PROTÓTIPOS

void vetor();	// função da construção do vetor das casas dos jogadores

int turn(int jogador);	//	função da troca de turnos

bool verTurno(string a, int jogador);	//	função de verificação do input correto para o respetivo turno

int jogo(string a, int jogador);	//	função base do jogo

bool gameOver(int p1, int p2);	//	verificação de final de jogo e score boards

void initBoard();	//	função de contrução do board

void printBoard(int p1, int p2);	//	função de print do board

void começarJogo();	//	função que ordena as funções e começa o jogo