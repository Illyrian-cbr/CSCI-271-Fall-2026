//Eris Vokshi
// Assignent 5 - score_stats.cpp

#include <iostream> // allows input and output
using namespace std; // allows cin and cout without st::

int main() { // main function where program starts
    const int SIZE = 5; // sets the array size to 5
    int arr[SIZE]; // creates an array to store 5 scores
    int sum = 0; // initializes the sum total to 0
    double average; // declares a variable for the average
    
    for (int i = 0; i < SIZE; i++) { //loops 5 times to collect scores
    cout << "Enter score " << i + 1 << ":"; cin >> arr[i]; // asks for a score and stores it in the array
    }
    cout << "Scores: "; // displays the scores label
    for (int c = 0; c < SIZE; c++) { // loops through the array to display all the scores
    cout << arr[c] << " "; // prints each score followed by a space
    }
    cout << endl; // moves to the next line

    for (int b = 0; b < SIZE; b++) { // loops through the array to calculate the sum
        sum += arr[b]; // adds each score to the total
    } cout << "Sum: " << sum << endl; // displays the total sum
    
    average = static_cast<double>(sum)/(SIZE); // calculate the average while keeping decimals
    cout << "Average: " << average << endl; // displays the average and ends the line
    
    int highest = arr[0]; // starts the highest score at the first element
int lowest = arr[0]; // starts the lowest score at the first element

for (int i = 1; i < SIZE; i++) { // checks the remaining scores for highest and lowest
    if (arr[i] > highest) { // checks if the current score is higher
        highest = arr[i]; // updates the highest score
    }

    if (arr[i] < lowest) { // checks if the current score is lower
        lowest = arr[i]; // updates the lowest score
    }
}

cout << "Highest: " << highest << endl; // displays the highest score
cout << "Lowest: " << lowest << endl; // displays the lowest score
    
    return 0; // ends the program successfully
}