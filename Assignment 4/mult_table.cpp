// Eris Vokshi
// Assignment 4 - Mult_Table 

#include <iostream> // handles input output operation
using namespace std; // Removes the need for std::

int main(){ // main function where the code inside is going to be executed
   int number;  // creates variable "number"
   int total; // creates variable "total"
   
   cout << "Enter a number:" << endl; // prompts the user to enter a number
   cin >> number; // takes user input and stores it in the number variable

   for (int multiplier = 1; multiplier <= 10; multiplier++) { // creates new int variable "multiplier" and runs the loop as long as multiplier is less than or equal to 10, adding 1 to the multiplier after each time the loop runs
      total = number * multiplier; // takes the number given by the user, and multiplies it by the multiplier and prints the total.
      cout << number << " x " << multiplier << " = " << total << endl; // Prints out the equation and answer
   }
   
  

    return 0; // tells the OS that the program ran and finished with zero errors
}