

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std; 

int main () 
{
	string playagain; 
	int aantal = 1;  
	int punten = 0; 
		

	cout << "\twelkom to this game" << endl; 
	cout << "\nTry to set the letter in the good way to form a word" << endl; 

	cout << "\nEnter 'hint' for a hint." << endl; 
	cout << "Enter 'quit' to quit the game." << endl; 

	enum field {WORD,HINT,NUM_FIELD}; 
	const int NUM_WORDS = 5; 
	const string WORDS[NUM_WORDS][NUM_FIELD] = 
	{
		{"jolien","Het is een persoon en het is een wonder dat haar hoofd niet vierkant is"},
		{"gehaktbal","Het is bruin en de buitenkant bestaat uit een soort eetbare bruine kostjes"},
		{"inktvisvoet","Die dier heeft eigenlijk geen voeten maar tentakels"},
		{"hagelslag","Het gehele gezin zou dood gaan zonder ... op hun brood"},
		{"dipsausje","Hoe heet mij computer ?"}
	};

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

		cout << "" << endl; 
		cout << index1 << endl; 
		cout << index2 << endl; 
		cout << "///" << endl; 

		char temp = doorelkaar[index1]; 
		cout << "" << temp << endl; 
		cout << "" << doorelkaar << endl; 
		cout << "///" << endl; 

		doorelkaar[index1] = doorelkaar[index2]; 
		cout << "" << doorelkaar << endl; 
		cout << "///" << endl; 

		doorelkaar[index2] = temp; 
		cout << "" << doorelkaar << endl; 
		cout << "" << temp << endl; 
		cout << "..........." << endl; 
		}

		cout << "\n\n\nTry to guess the word" << endl; 
		cout << "______________________________________________\n\n" << endl; 
		cout << "This jumble is: " << doorelkaar << endl; 
	
		cout << "\nEnter hint for a hint" << endl; 
		cout << "Enter quit to quit the game" << endl; 
	
		string player; 
		cin  >> player; 
	
	//............................Game Loop ..............................................
		while (player != "quit" && playagain != "quit")
	{
		
		if (playagain == "yes")
		{	
			aantal ++; 

			cout << "This is game " << aantal << " !!!!!!" << endl; 

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

			cout << "\n\n\nTry to guess the word" << endl; 
			cout << "______________________________________________\n\n" << endl; 
			cout << "This jumble is: " << doorelkaar << endl; 
	
			cout << "\nEnter hint for a hint, this will take 2 pionts" << endl; 
			cout << "Enter quit to quit the game" << endl; 
	
			string player; 
			cin  >> player; 
		}


		while (player != word && player != "quit")
		{
			if (player == "hint")
			{
				cout << "" << hint << "\n" << endl; 
				punten = punten - 2; 
				cout << "You have now " << punten << "punten" << endl; 

			} else { 
				cout <<"\nThat is the wrong word" << endl; 
			}
			
			cout << "____________________________________________" << endl; 
			cout << "Try to guess again" << endl; 
			cin >> player; 
		}

		if (player == word)
		{
			cout <<"\n\nThat is the right word" << endl; 
			cout <<"You are amazing" << endl; 
			cout <<"=) hihi _____________________________" << endl;

			cout << "You will get " << word.size() << " punten" << endl; 
			punten += word.size(); 
			cout << "You have now " << punten << " punten" << endl; 
		}
	
		cout << "\nDo you want to play a new game yes or quit" << endl;
		cin >> playagain; 
	}



	cout <<"\nThanks for playing" << "\n\n"<< endl; 
	cout << "You had " << punten << " punten" << endl; 

	return 0; 
}








