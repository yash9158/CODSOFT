#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{   
    cout<<endl;
    cout<<endl;
	cout << "It is a number guessing game"<< endl;
	cout << "You have to guess a number between 1 and 100."<<endl;

	while (true) {
		
		// generating the secret number
		srand(time(0));
		int ans = 1 + (rand() % 100);
		
			cout << "Choose number between 1 and 100.";
			while(true) {

				// prompting the player to guess the secret
				// number
				cout << endl<<"Enter the number: ";
                int choice;
				cin >> choice;

				// determining if the playerChoice matches
				// the secret number
				if (choice  == ans){
					cout<<"Yes! it is the number"<<endl;
					break;
				}
				else if (choice > ans) cout <<"High guess"<< endl;
                else cout << "Low guess"<<endl;
				}
                
                cout<<"Do you want to play again ? yes/no "<<endl;
                string what;
                cin >> what;
                if( what == "no" ) break; 
			}
	return 0;
}
