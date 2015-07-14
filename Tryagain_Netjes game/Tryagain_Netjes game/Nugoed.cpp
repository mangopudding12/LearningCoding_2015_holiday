



#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std; 


int main () 
{

// ................................ Variablen & Making ......................................
	string playagain; 
	string answer; 
	int aantal = 0;  
	int punten = 0; 
	
	enum field {WORD,HINT,NUM_FIELD}; 
	const int NUM_WORDS = 5; 

	// Hint en woorden
	const string WORDS[NUM_WORDS][NUM_FIELD] = 
	{
		{"jolien","Het is een persoon en het is een wonder dat haar hoofd niet vierkant is"},
		{"gehaktbal","Het is bruin en de buitenkant bestaat uit een soort eetbare bruine kostjes"},
		{"inktvisvoet","Die dier heeft eigenlijk geen voeten maar tentakels"},
		{"hagelslag","Het gehele gezin zou dood gaan zonder ... op hun brood"},
		{"dipsausje","Hoe heet mij computer ?"}
	};













	// ....................INTRO...................................
	cout << "\t\t\twelkom to this game" << endl; 
	cout << "\tTry to set the letter in the good way to form a word" << endl; 



	//................................ Game Loop ............................................ 

	while (playagain != "quit") 
	{
		aantal ++; 
		cout << "\n\nThis is game " << aantal << " !!!!!!" << endl; 
		cout << "_  _____________________________________________________________" << endl; 
		cout << "Enter hint for a hint, (it will cost 2 pionts)" << endl; 
		cout << "Enter quit to quit the game" << endl; 
	


	// ........................ make a random word ................................................

		srand (static_cast<unsigned int>(time(0))); 
		int random = rand () % NUM_WORDS; 

		string word = WORDS[random][WORD];
		string hint = WORDS[random][HINT];
	
	
		string doorelkaar = word; 
		int length = doorelkaar.size(); 

		for (int i = 0; i < length; i++)
		{
			int index1 = (rand() % length); 
			int index2 = (rand() % length); 

			char temp = doorelkaar[index1]; 
			doorelkaar[index1] = doorelkaar[index2]; 
			doorelkaar[index2] = temp; 
		}


	//..................... Guess the word ..............................................................
		
		cout << "\n\n\nTry to guess the word" << endl; 
		cout << "______________________________________________\n\n" << endl; 
		cout << "This jumble is: " << doorelkaar << endl; 
		cin >> answer; 


	// ........................ Feedback on the answer ..................................................
		while (answer != word && answer != "quit")
		{
			if (answer == "hint")
			{
				cout << "" << hint << "\n" << endl; 
				punten = punten - 2; 
				cout << "You have now " << punten << " punten." << endl; 

			} else { 
				cout <<"\nThat is the wrong word." << endl; 
			}
			
			cout << "____________________________________________" << endl; 
			cout << "Try to guess again" << endl; 
			cin >> answer; 
		}

	// ....................... When the guess is right ................................................... 
		if (answer == word)
		{
			cout <<"\n\nThat is the right word" << endl; 
			cout <<"You are amazing" << endl; 
			cout <<"=) hihi _____________________________" << endl;

			cout << "You will get " << word.size() << " punten" << endl; 
			punten += word.size(); 
			cout << "You have now " << punten << " punten" << endl; 
		}
	

	// ......................... Play again ?? ..........................................................
		cout << "\nDo you want to play a new game yes or quit" << endl;
		cin >> playagain;

	} // if answer is not quit the game goes again. 




	// ...................... Afsluiting ..................................................................
		cout << "_________________________________" << endl;  
		cout <<"\nThanks for playing" <<  endl; 
		cout << "You had " << punten << " punten" << "\n\n" << endl; 


	return 0; 
} // End of the whole game 











