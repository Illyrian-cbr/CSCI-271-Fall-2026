
 // Eris Vokshi
 // Assignment 5 - array_utils

#include <iostream> // Allows input and output
using namespace std; // Allows cin and cout without std::

void printForward(const int arr[], int size) { // Function to print the array in order
    cout << "Forward: "; // Displays the forward label

    for (int i = 0; i < size; i++) { // Loops from the first element to the last
        cout << arr[i] << " "; // Prints each element followed by a space
    }

    cout << endl; // Moves to the next line
}

void printReverse(const int arr[], int size) { // Function to print the array in reverse
    cout << "Reverse: "; // Displays the reverse label

    for (int i = size - 1; i >= 0; i--) { // Loops from the last element to the first
        cout << arr[i] << " "; // Prints each element followed by a space
    }

    cout << endl; // Moves to the next line
}

int countAbove(const int arr[], int size, int limit) { // Function to count values greater than the limit
    int count = 0; // Starts the counter at 0

    for (int i = 0; i < size; i++) { // Loops through each element
        if (arr[i] > limit) { // Checks if the current value is greater than the limit
            count++; // Increases the count if the condition is true
        }
    }

    return count; // Returns the number of values above the limit
}

int main() { // Main function where the program starts
    const int SIZE = 6; // Sets the array size to 6
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // Creates an array with 6 values
    int limit; // Stores the limit entered by the user

    printForward(values, SIZE); // Calls the function to print the array forward
    printReverse(values, SIZE); // Calls the function to print the array backward

    cout << "Count values above: "; // Asks the user for a limit
    cin >> limit; // Stores the user's limit

    cout << "Count: " << countAbove(values, SIZE, limit) << endl; // Displays the number of values above the limit

    return 0; // Ends the program successfully
}
