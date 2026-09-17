//Eris Vokshi
// Assignment 3: Temp checker

#include <iostream> // Allows the program to use cin and cout

using namespace std; // Allows us to use cin and cout without having to use "std::" before

int main() {
    int temperature; // Creates an integer variable to store the temperature

    cout << "Enter the temperature (F):" << endl; // Prompts the user to enter the temperature in Farenheit
    cin >> temperature; // Allows for user input

    if (temperature < 32) {
        cout << "That's Freezing"; // tells our system that if the integer inputted by the user is less than 32F, then print "That's freezing"
    } 

    else if (temperature <= 59) {
        cout << "That's Cold"; // tells our system to output "That's cold" if the integer inputted by the user is less than or equal to 59F
    }

    else if (temperature <= 75) {
        cout << "That's Mild"; // tells our system to output "That's Mild" if the integer inputted by the user is less than or equal to 75F
    }

    else {
        cout << "That's Hot"; // tells our system to output "That's Hot" if the integer inputted by the user is not within any of the integer ranges listed above (aka, greater than 75F)
    }
    return 0; // tells the system that our program finished successfully
}