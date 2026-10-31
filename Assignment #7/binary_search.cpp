// Eris Vokshi
// Assignment 7 - binary_search

#include <iostream> // allows input and output
using namespace std; // lets us use cin and cout without std::

int main() // main function where the code will run
{
    
    const int SIZE = 8; // sets the array size to 8
    int num; // creates a variable for the number the user wants to find
    int arr[SIZE] {11, 22, 33, 44, 55, 66, 77, 88}; // creates the sorted array with 8 numbers
    
    cout << "Enter target number: "; // asks the user to enter a target number
    cin >> num; // stores the number entered by the user
    
    int low = 0; // starts the search at the first index
    int high = SIZE - 1; // sets the end of the search to the last index
    int foundIndex = -1; // starts at -1 since the number has not been found
    
    while (low <= high){ // keeps searching while there are still indexes to check
        int mid = (low + high) /2; // calculates the middle index
        
        if (num == arr[mid]){ // checks if the middle number matches the target
            foundIndex = mid; // saves the index where the number was found
            break; // stops the loop once we find the number
        }
        else if (num > arr[mid]){ // checks if the target is bigger than the middle number
            low = mid + 1; // moves the search to the right half
        }
        else{ // runs if the target is smaller than the middle number
            high = mid - 1; // moves the search to the left half
        }
    }
    if (foundIndex == -1){ // checks if the target was not found
        cout << "Number not found"; // prints that the number was not found
    }
    else { // runs if the target was found
        cout << num << " found at index " << foundIndex;  // prints the number and the index where it was found
    }
}
