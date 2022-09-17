/*Copyright StephensonEng
*Code not modifiable
*/

#include<iostream>
#include<map>
#include<string>

using std::cout;
using std::cin;
using std::endl;

int option;

void show() {
	cout << "                          -----------Home-----------                        " << "\n";
	cout << "                                                                            " << "\n";
	cout << "      1. Start game                                        2. Exit game" << "\n";
	cin >> option;
	
}
int main() {
	std::string player1, player2, word, underscore, guess;
	int wrongWord = 0;
	std::string newWord = word;
	std::map<std::string, int > wordMap;
	std::map<std::string, std::string> wordMap2;
	
	do { 
		cout << "select an option" << "\n";
		show();
		system("cls");
		switch (option) {
		case 1: cout << "player 1 enter your name" << "\n";
			cin >> player1;
			cout << "player 2 enter your name" << "\n";
			cin >> player2;
			cout << player1 << " please enter the word you want " <<" " << player2 <<" "<< " to guess " << "\n";
			cin >> word;
			system("cls");
			cout << player2 <<" "<< "please guess the word entered by" <<" " << player1 << endl;
			
			for (int x = 0; x << 20; x++)
				cout << endl;
			while (underscore.size() != word.size())  //checking if the size of underscore is different than word size then it executes
			{
				underscore.push_back('_');
			}cout << underscore << endl;

			while (wrongWord < 5) {   //nested if statement checking if guess variable exceeds an extra letter, if it does and guess is = to word then
					                  //it outputs correct word guessed
									
				cin >> guess;
				if (guess.size() > 1) {   
					if (guess == word) {
						cout << "correct word" << "\n";
						wordMap2[player2] = "You Won!";
						for (auto& [key, value] : wordMap2)
							cout << key << " " << ":" << " " << value << endl;
						
						
						break;
					}
					else {
						cout << underscore << endl;
						cout << "wrong word entered..try again" << endl;
						wrongWord++;    //wrongword variable increments by 1 everytime player 2 guess incorectly
						wordMap["Words Guess Incorrectly"] = wrongWord;
						for (auto& [key, value] : wordMap)  //map created to output incorect words and number of times word guessed incorrectly
							                               //as key value pair
							cout << key << " " << "=" << " " << value << endl;
					}
					
				} 
				if (underscore == word) {
					cout << endl;
					break;
				}
				if (wrongWord == 1) 
					cout << "I" << "\n";
				
				else if (wrongWord == 2) {
					cout << "I" << "\n";
					cout << "I" << endl;
				}
				else if (wrongWord == 3) {
					cout << "I ==" << "\n";
					cout << "I" << "\n";
					cout << "I" << "\n";
				}
				else if (wrongWord == 4) {
					cout << "I ===" << endl;
					cout << "I  O " << endl;
					cout << "I -|-" << endl;
					cout << "I     " << endl;
				}
				else if (wrongWord == 5) {
					cout << "I ===" << endl;
					cout << "I  O " << endl;
					cout << "I -|-" << endl;
					cout << "I  /   " << endl;
					cout << "I  /   " << endl;
					wordMap2[player2] = "Loser!";
					for (auto& [key, value] : wordMap2)
						cout << key << " " << ":" << " " << value << endl;
					cout << "try next time" << endl;
					break;
				}

			}
		}
	} 
		while (option != 2 && cin.get()>0);
	return 0;
	cin.get();

}

