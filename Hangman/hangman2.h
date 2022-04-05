#include<iostream>
#include<ctime>
#include<vector>
#include<fstream>
#include<thread>
#include<chrono>
#include<cstdlib>
using namespace std;

// chon 1 tu
string chooseWord();
// hien thi
void renderGame( string guessedWord, int badGuess, string guessChar );
// update 
string update(string& guessedWord,const string& secretWord, char guess);

bool contains(string secretWord, char guess);
void renderFigure(int badGuess);
// hinh nguoi nhay mua khi thang
void win();
void lost();
