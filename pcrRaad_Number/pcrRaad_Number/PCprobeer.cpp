

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>



using namespace std; 

int main () 
{
	int tries = 0; 
	int min = 1; 
	int max = 100;
	int numbermin; 
	int numbermax; 

	cout <<  "Hello welcome to this number guess game" << endl; 
	cout << "This time I the very smart computer named dipsausje" << endl; 
	cout << "Try to guess the number you have in your head" << endl; 
	cout << "Oke let's start the game, I now will guess your number very fast hihi" << endl;

	cout << "\n\nSo take a number in your brain between 1 and 100 and don't tell it to me" << endl; 
	cout << "Are you ready ? Writte yes or no" << endl; 
 
	string ready; 
	cin >> ready; 

	while (ready != "yes" && ready != "no")
	{
		cout << "\nPlease anwer this question with yes or no" << endl; 
		cin >> ready;
	}


	string answer; 
	 
	if (ready == "no")
	{
		cout << "Take a number in your head, little bit faster now" << endl; 
		cin >> ready; 
	}





	if (ready == "yes")
	{
		cout << "\nNice, now it is time that I try to guess your number" << endl; 


		do 
		{
			srand(static_cast<unsigned int>(time(0))); 
			int guess = rand() % (max - min) + min; 
		
			cout << "\n\nI think that it is number: " << guess << endl; 
			cout << "Answer with low or high or won" << endl; 

				cout << "max is nu " << max <<  endl; 
				cout << "min is nu " << min <<  endl; 

			cin >> answer; 

			if (answer == "low")
			{
				tries ++; 
				

				if (guess > min)
				{
					min = guess; 
				} 

			} else if (answer == "high")
			{
				tries ++;
				
				if (guess < max)
				{
					max = guess; 
				} 
			}

		} while (answer != "won");


		cout << "PC winn the game" << endl; 
		cout << "in " << tries << " so much tries" << endl;  
	} 

	return 0; 
}




