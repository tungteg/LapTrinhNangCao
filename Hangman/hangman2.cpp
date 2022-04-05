#include "hangman2.h"

const string FIGURE[] = {
	"    ---------------     \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",
	"    ---------------     \n"
	"    |            |      \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",
	
	"    ---------------     \n"
	"    |            |       \n"
	"    |            o       \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",
	"    ---------------     \n"
	"    |            |       \n"
	"    |            o       \n"
	"    |            |       \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",
	"    ---------------     \n"
	"    |            |       \n"
	"    |            o       \n"
	"    |           /|       \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",
	"    ---------------     \n"
	"    |            |       \n"
	"    |            o       \n"
	"    |           /|\\       \n"
	"    |                   \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",
	"    ---------------     \n"
	"    |            |       \n"
	"    |            o       \n"
	"    |           /|\\       \n"
	"    |           /       \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",
	"    ---------------     \n"
	"    |            |       \n"
	"    |            o       \n"
	"    |           /|\\     \n"
	"    |           / \\    \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",			
};

const string winFigure[] = {
	"     O        \n"
	"    /|\\      \n"
	"    | |      \n"
	" ----------- \n",
	
	"     o        \n"
	"    /|\\      \n"
	"    / \\      \n"
	" ----------- \n",
	
	"   _ O _       \n"
	"     |      \n"
	"    / \\      \n"
	" ----------- \n",
	"    \\O/       \n"
	"     |      \n"
	"    / \\      \n"
	" ----------- \n",
	
	"   _ O _       \n"
	"     |      \n"
	"    / \\      \n"
	" ----------- \n",
	
	"     O        \n"
	"    /|\\     \n"
	"    / \\      \n"
	" ----------- \n",
	
	"    O        \n"
	"    /|\\      \n"
	"    / \\      \n"
	" ----------- \n",
	
	"      O        \n"
	"    /|\\      \n"
	"    / \\      \n"
	" ----------- \n",
	
	"     O        \n"
	"    /|\\      \n"
	"    / \\      \n"
	" ----------- \n",
	
	
};

const string lostFigure[] = {
	
	"    ---------------     \n"
	"    |            |       \n"
	"    |            o       \n"
	"    |           /|\\     \n"
	"    |           / \\    \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",
	
	"    ---------------     \n"
	"    |           /       \n"
	"    |          o       \n"
	"    |         /|\\     \n"
	"    |         / \\    \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",
	
	"    ---------------     \n"
	"    |            \\       \n"
	"    |             o       \n"
	"    |            /|\\     \n"
	"    |            / \\    \n"
	"    |                   \n"
	"    |                   \n"
	" -------                \n",
	
};
void renderGame( string guessedWord, int badGuess, string guessChar ){
	system("cls");
	cout << FIGURE[badGuess]; 
	cout << guessedWord << endl;
	cout << "Number of wrong guesses: " << badGuess << endl;
	cout << "Your Guessed Char: "<< guessChar << endl;
	cout << "Your guess: ";
}

string update(string& guessedWord,const string& secretWord, char guess){
	for(int i = secretWord.length()-1; i>=0; i--){
		if(guess == secretWord[i]){
			guessedWord[i] = guess;
		}
	}
	return guessedWord;
}

bool contains(string secretWord, char guess){
	int count = 0;
	
	for(int i=secretWord.length()-1; i>=0 ;i--){
		if(secretWord[i] == guess) count++;
	}
	
	if(count>0) return true;
	else return false;
}

string chooseWord(){
	vector<string> text;
	
	ifstream file("textHangMan.txt");
	if(file.is_open()){
		string line;
		while(file >> line){
			text.push_back(line);
		}
	}
	
	srand(time(0));
	int randomIndex = rand()%1000;
	return text[randomIndex];

}

void win(){
	for(int i=0;i<3;i++){
		int img = 0;
		while(img<9){
			cout << winFigure[img];
			this_thread::sleep_for(chrono::milliseconds(100));
			img++;
			system("cls");	
		}
	}
	cout << winFigure[0];
}

void lost(){
	for(int i=0;i<3;i++){
		int img = 0;
		while(img<3){
			cout << lostFigure[img];
			this_thread::sleep_for(chrono::milliseconds(100));
			img++;
			system("cls");
		}
	}
	cout << lostFigure[0];
}


