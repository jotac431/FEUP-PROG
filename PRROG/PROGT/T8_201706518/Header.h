#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

//PROT�TIPOS

void vetor();	// fun��o da constru��o do vetor das casas dos jogadores

int turn(int jogador);	//	fun��o da troca de turnos

bool verTurno(string a, int jogador);	//	fun��o de verifica��o do input correto para o respetivo turno

int jogo(string a, int jogador);	//	fun��o base do jogo

bool gameOver(int p1, int p2);	//	verifica��o de final de jogo e score boards

void initBoard();	//	fun��o de contru��o do board

void printBoard(int p1, int p2);	//	fun��o de print do board

void come�arJogo();	//	fun��o que ordena as fun��es e come�a o jogo