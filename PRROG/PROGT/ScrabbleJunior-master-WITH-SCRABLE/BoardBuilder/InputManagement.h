#pragma once
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

//Fun��o que lida com o input do tamanho do Board
void sizeInput(int &size);
int numWords();
string keyInput();
char orientationInput();

int readNumber(string msg);

int ieMenu(int maxOption);