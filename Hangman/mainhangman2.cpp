#include "hangman2.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string secretWord = chooseWord();
	string guessedWord = string(secretWord.length(), '-');
	
	int badGuess=0;
	string guessChar = ""; // danh sach tu da doan
	char guess;
	
	do{
		renderGame( guessedWord, badGuess, guessChar);
		cin >> guess;
		guessChar += guess;
		if(contains(secretWord, guess) == true){
			update(guessedWord, secretWord, guess);
		}
		else badGuess++;
		
		
	}while(badGuess < 7 && guessedWord != secretWord);
	renderGame( guessedWord, badGuess, guessChar);
	
	
	if(badGuess < 7 ){
		win();
		cout << "Congratulations! You win!!!!";
	}
	else{
		lost();
		cout <<"You lost. The correct word is: " << secretWord;
	}
	

	return 0;
}
