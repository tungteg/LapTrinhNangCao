#include<iostream>
#include<ctime>
using namespace std;
// danh sanh du doan
const string LIST_NAME_ASEAN[] = {"Brunei",
 "cambodia",
  "indonesia",
   "laos",
    "malaysia",
	"myanmar",
	"philippines",
	"singapore",
	"thailand",
	"vietnam"};
	
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
// chon 1 tu
string chooseWord();
// hien thi
void renderGame( string guessedWord, int badGuess );
// update 
string update(string& guessedWord, string secretWord, char guess);

bool contains(string secretWord, char guess);
void renderFigure(int badGuess);
void cleanScreen(){
	for(int i=0;i<50;i++ ) cout << endl;
}

int main(){
	string secretWord = chooseWord();
	string guessedWord = string(secretWord.length(), '-');
	
	int badGuess=0;
	
	char guess;
	
	do{
		renderGame( guessedWord, badGuess);
		cin >> guess;
		if(contains(secretWord, guess) == true){
			update(guessedWord, secretWord, guess);
		}
		else badGuess++;
		
		
	}while(badGuess < 7 && guessedWord != secretWord);
	renderGame( guessedWord, badGuess);
	
	if(badGuess < 7) cout << "Congratulations! You win!!!!";
	else cout <<"You lost. The correct word is: " << secretWord;
	
	return 0;
}

void renderGame( string guessedWord, int badGuess ){
	cleanScreen();
	cout << FIGURE[badGuess]; 
	cout << guessedWord << endl;
	cout << "Number of wrong guesses: " << badGuess << endl;
	cout << "Your guess: ";
}

string update(string& guessedWord, string secretWord, char guess){
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
	srand(time(0));
	int randomIndex = rand()%10;
	return LIST_NAME_ASEAN[randomIndex];
}

