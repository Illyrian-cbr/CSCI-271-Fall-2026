// Eris Vokshi
// Assignment 4: Menu validation

#include <iostream> // handles input and output 
using namespace std; // removes need for std::

int main(){ // main function where code inside is executed
    
int choice; // creates integer variable "choice"

do { // First part of the loop. Everything inside the do is executed first before it is checked against any condition
 cout << "Enter a menu choice (1, 2, or 3): " << endl; // prompts the user to enter their menu choice
 cin >> choice; // allows user input and stores the response in the choice variable
 
 if (choice > 0 && choice <= 3) { // If a user enters any integer greater than 0 and less than or equal to 3, the system prints out "You selected option [Option]"
     cout << "You selected option " << choice << endl;
 }
 
 else {
     cout << "Invalid choice, try again: " << endl; // If a user enters any integer different from the ones stated in the "if" condition, the system prints out "Invalid choice, try again:"
 }
 
 
} while ( choice <= 0 || choice > 3); // allows the loop to run while either of the stated conditions are true. Once one of thse conditions become false, the loop stops running. 

    return 0; // tells the OS that the program ran and finished with no errors.
}