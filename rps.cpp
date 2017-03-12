//Andrew Bossie
//Rock Paper Scissors 


#include <iostream>
#include <string>


using namespace std;

int main(){

	string player1Input;															// introduce turn variables
	string player2Input;

	char player1Turn;
	char player2Turn;

	string player1Win = "Player 1 wins!";											// outcome variables
	string player2Win = "Player 2 wins!";
	string gameTie = "Tie";

	string againSelect;
	bool playAgain = true;


	while (playAgain){	

		cout << "Player 1, Please enter (R)ock, (P)aper or (S)cissors: \n";			// ask player 1 for input
		getline(cin, player1Input);

			if ((player1Input == "ROCK") || (player1Input == "Rock") || (player1Input == "rock") || (player1Input == "R") || (player1Input == "r")){ 		// redundant??
				player1Turn = 'R';
			}

			else if ((player1Input == "PAPER") || (player1Input == "Paper") || (player1Input == "paper") || (player1Input == "P") || (player1Input == "p")){
				player1Turn = 'P';
			}

			else if ((player1Input == "SCISSORS") || (player1Input == "Scissors") || (player1Input == "scissors") || (player1Input == "S") || (player1Input == "s")) {
				player1Turn = 'S';
			}


		cout << "Player 2. Please enter (R)ock, (P)aper or (S)cissors: \n";			// ask player 2 for input
		getline(cin, player2Input);

			if ((player2Input == "ROCK") || (player2Input == "Rock") || (player2Input == "rock") || (player2Input == "R") || (player2Input == "r")){
				player2Turn = 'R';
			}

			else if ((player2Input == "PAPER") || (player2Input == "Paper") || (player2Input == "paper") || (player2Input == "P") || (player2Input == "p")){
				player2Turn = 'P';
			}

			else if ((player2Input == "SCISSORS") || (player2Input == "Scissors") || (player2Input == "scissors") || (player2Input == "S") || (player2Input == "s")) {
				player2Turn = 'S';
			}																	


			if ((player1Turn == 'R') && (player2Turn == 'P')){						// game conditions
				cout << player2Win << endl;											
			}																		// for the LONGEST time player 2 always won

			else if ((player1Turn == 'R') && (player2Turn == 'S')){
				cout << player1Win << endl;
			}

			else if ((player1Turn == 'P') && (player2Turn == 'S')){
				cout << player2Win << endl;
			}

			else if ((player1Turn == 'P') && (player2Turn == 'R')){
				cout << player1Win << endl;
			}

			else if ((player1Turn == 'S') && (player2Turn == 'P')){
				cout << player1Win << endl;
			}

			else if ((player1Turn == 'S') && (player2Turn == 'R')){
				cout << player2Win << endl;
			}

			else if (player1Turn == player2Turn){
				cout << gameTie << endl;
			}


		cout << "Play again? (Y)es or (N)o: ";										// would you like to play again?
		getline(cin, againSelect);
		cout << "\n";

		if ((againSelect == "YES") || (againSelect == "Yes") || (againSelect == "yes") || (againSelect == "Y") || (againSelect == "y")){
			playAgain = true;
		}

		//else if (againSelect == "NO" || "No" || "no" || "N" || "n") {
			//playAgain = false;
		//}	

		else {
			playAgain = false;
		}

	}


	cout << "Game Over \n";
	cout << "\n";

	return 0;
}