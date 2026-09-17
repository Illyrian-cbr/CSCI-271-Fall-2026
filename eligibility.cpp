// Eris Vokshi
// Assignment 3: eligibility tracker

#include <iostream> // allows us to use cin and cout to collect user input and print out a response

using namespace std; // allows us to use cin and cout without having to write "std::" before

int main() {
    int age; // creates an integer variable titled "age"
    int isMember; //creates an integer variable titled "isMember"

    cout << "How old are you?:" << endl; // system prompts the customer/user to enter their age
    cin >> age; // allows for the user to input their age 

    cout << "Are you a member? (yes = 1, no = 0):"; // system prompts the customer/user to answer whether they're a member or not using "1" for Yes and "0" for No
    cin >> isMember; // allows for the user to input whether they're a member or not (1 or 0)

    if (age >= 60 || (age >= 18 && isMember == 1)) { // creates a 2-way condition basically saying that if the user is 60+ years old, OR, is 18+ years old and is a member, that they are eligible for a discount
        cout << "You qualify for the discount"; // if the above condition is met, the system prints out "You qualify for the discount"
    }

    else { // creates an else condition, meaning that if the above condition (the if) was not met according to the user's input, then they are not eligible for the discount 
        cout << "You do not qualify for the discount"; 
    }

    return 0; // tells the system that this program finished successfully
}