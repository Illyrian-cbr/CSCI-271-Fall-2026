// Eris Vokshi
// Assignment 7 - grade_tracker

#include <iostream> // allows input and output
#include <vector> // allows us to use vectors
using namespace std; // lets us use cin and cout without std::

int main() // main function where the code will run
{
   vector<int> grades; // creates an empty vector to store grades
   int gradeAmount; // creates a variable for how many grades the user wants to enter
   
   cout << "How many grades? "; // asks the user how many grades they want to enter
   cin >> gradeAmount; // stores the number entered by the user
 
   for (int i = 1; i <= gradeAmount; i++){ // runs the loop for however many grades the user entered
      cout << "Enter grade " << i << ":";  // asks the user to enter each grade
      int temp; // creates a temporary variable to hold the grade
      cin >> temp; // stores the grade entered by the user
      grades.push_back(temp); // adds the grade to the end of the vector
   }
   cout << "Grades: "; // prints the grades label
   for (int g: grades){ // goes through every grade in the vector
       cout << g << " "; // prints each grade followed by a space
   } 
   cout << endl; // moves to the next line
   cout << "Count: " << grades.size() << endl; // prints the number of grades stored in the vector
   
   int total = 0; // starts the total at 0
   for (int elements: grades){ // loops through every grade in the vector
       total += elements; // adds each grade to the total
   }
   double average = static_cast<double>(total)/grades.size(); // divides the total by the number of grades and keeps decimals
   cout << "Average: " << average << endl; // prints the average grade
   
   int highest = grades.at(0); // starts highest at the first grade in the vector
   for (int g: grades){ // loops through every grade to find the highest one
       if (g > highest){ // checks if the current grade is higher than highest
           highest = g; // updates highest if a larger grade is found
   }}
   cout << "Highest: " << highest; // prints the highest grade
   
   
}
