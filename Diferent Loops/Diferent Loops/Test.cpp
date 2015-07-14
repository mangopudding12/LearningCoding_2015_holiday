

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main () 
{ 
	string name; 
	string animal; 
	string color; 

	cout << "It is time for a word game" << endl; 
	cout << "Please enter your name" << endl; 
	cin >> name; 

	cout << "\nplease enter a kind of animal" << endl;
	cin >> animal; 

	cout << "\nPlease enter a color" << endl; 
	cin >> color; 

	cout << "\n" << animal << " zat op de dikke " << color << " wonderschoone " << name << "." << endl;  
	
	cout << "\nGreat job now it is time for something else" << endl; 

	//.....................................................................

    
	cout << "\n\nPlease write a bijvoegelijk naam woord" << endl; 
	string bij; 
	cin >> bij; 
	string totaalzin = bij + " " + color + " " + name; 
	
	cout << "Your beautiful sentence look like this:" << endl; 
	cout << "\n\n" << totaalzin << endl;
	cout << "\nThe sentence heeft een size van: "<< totaalzin.size() << endl; 
	
	int position; 
	cout << "\nWrite a number between 1 and "<< totaalzin.size() << endl; 
	cin >> position; 
	cout << "\nThe character on position " << position << " is " << totaalzin[position] << endl; 
	cout << "\nI go to change this character in a random letter from the alfabet" << endl; 

	// random letter 
	srand (static_cast<unsigned int> (time(0))); 
	int character = rand(); 
	int letter = rand() % 25 + 1;

	string alfabet = "abcdefghijklmnopqrstuvwxyz" ; 
	cout << "The random letter is: " << alfabet[letter] << endl;


	totaalzin [position] = alfabet[letter]; 
	cout << "\n\nThe new sentence is: " << totaalzin << "\n\n"; 

	// ......................................................................... 


	for (int i = 0; i < totaalzin.size(); i ++)
	{
		cout << "Character at position " << i << " is: " << totaalzin[i] << endl; 
	}

	// ..................................................... 

	cout << "\nI am going to search the word " << name << " In the new sentence we made" << endl; 
	
	if (totaalzin.find(name) == string::npos)
	{
		cout << "\nThis word does not exist anymore" << endl; 
	} else { 
		cout << "I found the word it is on position " << totaalzin.find(name) << endl; 
	}

	cout << "\nI am going to remove a part of the word" << endl; 
	totaalzin.erase(position,totaalzin.size()); 

	cout << "The new sentences is " << totaalzin << endl; 
	
	totaalzin.erase(); 

	if (totaalzin.empty())
	{
		cout << "\n\nI deleting the whole sentence" << "\n\n";	
	}



	return 0; 
}





