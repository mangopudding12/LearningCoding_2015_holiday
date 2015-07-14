


#include<iostream>
#include<string>
using namespace std; 

int main () 
{

	cout << "Counting forwards" << endl; 
	for (int i = 0; i <= 9; i ++) 
	{
		cout << i <<  "  " ; 
	}

	cout << "\nCounting backwards" << endl; 
	for (int i = 9; i >= 0; i --) 
	{
		cout << i << " "; 
	}

	cout << "\nCouting with nest for loops" << endl;
		const int rij = 9;  
		const int lengte = 4; 

		for (int i = 1; i <= lengte; i ++)
		{
			for (int k = 1; k <= rij; k ++)
			{
				cout << i << k << " "; 
			}
			cout << endl; 
		}




		string hoi = "rattenvanger dog ik ben rattenvanger hoera dog"; 

		cout << hoi << endl; 

		

		if (hoi.find("dog") == string::npos)
		{
			cout <<"\nDont here " << endl; 
		} else { 
			cout << hoi.find("dog") << endl; 
		}




	return 0; 
}








