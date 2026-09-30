// Eris Vokshi
// Assignment 4: Menu validation

#include <iostream>
using namespace std;
int main(){
    
int choice;

do {
 cout << "Enter a menu choice (1, 2, or 3): " << endl;
 cin >> choice;
 
 if (choice > 0 && choice <= 3) {
     cout << "You selected option " << choice << endl;
 }
 
 else {
     cout << "Invalid choice, try again: " << endl;
 }
 
 
} while ( choice <= 0 || choice > 3);

    return 0;
}