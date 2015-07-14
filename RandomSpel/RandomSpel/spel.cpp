


#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std; 


// aaaaaaaaaaaaaaa my game is working hihi. 
// I am pround, but I had help for the book. 
// I hope I learn it this way. 

int main () 
{
		cout << "\tWelkom by guess my number" << endl;

		cout << "\nChoose how dificult you want to play" << endl; 
		cout << "1:\tbetween 1 and 10" << endl; 
		cout << "2:\tbetween 1 and 100" << endl; 
		cout << "Write the number of you choose here: "; 

		int dificult; 
		cin >> dificult;  


		while (dificult != 1 && dificult != 2) 
		{
			cout << "\n\nThe choose you make is not allowed" << endl; 
			cout << "Try again, you must choose between dificulty 1 and 2" << endl; 
			cin >> dificult; 
		}


		if (dificult == 1)
		{
			srand (static_cast<unsigned int> (time(0))); // seed a ramdom numer generator 
			int PCnumber = rand(); 
			int numbertoguess = (PCnumber % 10) + 1; 
			
			int tries = 0; 

			cout << "\n\nThe computer have a number in his brain between 1 and 10" << endl; 
			cout << "Try to guess his number" << endl; 
			int Raden; 
				

			do  
			{			
				cout << "\n\nEnter a guess: " << endl; 
				cin >> Raden;
				tries ++; 

				if (Raden > numbertoguess)
				{
					cout << "\nYou number is to high" << endl; 
					cout << "You are not smart enough to guess my number hihi" << endl; 
				} 
				else if (Raden < numbertoguess)
				{
					cout << "\nYour number is to low" << endl;
					cout << "I am sure you have no brains" << endl; 
				} 
				else 
				{
					cout << "\nnooooo nooo you guess my number" << endl; 
					cout << "my number was: " << numbertoguess << endl; 
					cout << "You guess the number in "<< tries << " times" << endl; 
				}

			} while (Raden != numbertoguess);
	


		} else if (dificult == 2)
		{	
			srand (static_cast<unsigned int> (time(0))); // seed a ramdom numer generator 
			int PCnumber = rand(); 
			int numbertoguess = (PCnumber % 100) + 1; 
			
			int tries = 0; 
			int Raden; 

			cout << "\n\nThe computer have a number in his brain between 1 and 100" << endl; 
			cout << "Try to guess his number" << endl; 


		    do  
			{			
				cout << "\n\nEnter a guess: " << endl; 
				cin >> Raden;
				tries ++; 

				if (Raden > numbertoguess)
				{
					cout << "\nYou number is to high" << endl; 
					cout << "ooo I am sure you brains are melt" << endl; 
				} 
				else if (Raden < numbertoguess)
				{
					cout << "\nYour number is to low" << endl;
					cout << "I am to smart for a human" << endl; 
				} 
				else 
				{
					cout << "\nnooooo nooo you guess my number" << endl; 
					cout << "my number was: " << numbertoguess << endl; 
					cout << "You guess the number in "<< tries << " times" << endl; 
				}

			} while (Raden != numbertoguess);
	

		}



		cout << "\n\n\tRestart the game if you want to play again\n\n" << endl; 
		return 0;

		}