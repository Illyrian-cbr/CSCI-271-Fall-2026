// Eris Vokshi
// Assignment 8 - vowel counter

#include <iostream> // standard cpp library
#include <string> // allows us to include string and getline
#include <cctype> // allows us to use tolower/toupper to capitalize or lowercase our letters

using namespace std; // allows us to write cout statements without std::

int main() { // Initializes main function 

    string sentence; // creates a string variable allowing users to enter their sentence
    cout << "Enter a sentence: "; // prompts the user to enter a sentence
    getline(cin, sentence); // allows the system to take an input with spaces in between each word. In this case, a full sentence

    int vowelCounter = 0; // initializes a counter where we'll store our vowels
    for(int i = 0; i < sentence.length(); i++){ // for loop that goes through every letter of the sentence entered by the user
        sentence[i] = tolower(sentence[i]); // takes each letter through the for loop and makes it lowercase so our if statement later on can read and compare the letters to the conditions
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u'){ // if condition that checks if each letter in the sentence is a vowel (aeiou)
            vowelCounter++; // if the letter is a vowel, that value is added to the vowel counter
        }
        }
        cout << "Vowels: " << vowelCounter; // prints out the values
    }