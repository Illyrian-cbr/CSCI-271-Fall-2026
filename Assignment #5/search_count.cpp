// Eris Vokshi
// Assignment 5 - search_count

#include <iostream> // Allows input and output
using namespace std; // Allows cin and cout without std::

int main() { // Main function where the program starts
    const int SIZE = 10; // Sets the array size to 10
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; // Creates an array with 10 values

    int target; // Stores the number the user wants to find
    int foundIndex = -1; // Starts at -1 to indicate no match has been found
    int count = 0; // Starts the number of matches at 0

    cout << "Enter a number to search for: "; // Asks the user for a number
    cin >> target; // Stores the user's number

    for (int i = 0; i < SIZE; i++) { // Loops through all 10 elements
        if (data[i] == target) { // Checks if the current element matches the target
            count++; // Increases the count when a match is found

            if (foundIndex == -1) { // Checks if this is the first match
                foundIndex = i; // Saves the index of the first match
            }
        }
    }

    if (foundIndex != -1) { // Checks if the target was found
        cout << target << " first found at index " << foundIndex << endl; // Displays the first index
        cout << target << " appears " << count << " time(s)" << endl; // Displays the number of matches
    } else { // Runs if the target was not found
        cout << target << " was not found." << endl; // Displays the not found message
    }

    return 0; // Ends the program successfully
}
