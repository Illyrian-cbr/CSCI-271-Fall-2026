// Eris Vokshi
// Assignment 4 - Mult_Table 

#include <iostream>
using namespace std;

int main(){
   int number;
   int total;
   
   cout << "Enter a number:" << endl;
   cin >> number;

   for (int multiplier = 1; multiplier <= 10; multiplier++) {
      total = number * multiplier;
      cout << number << " x " << multiplier << " = " << total << endl;
   }
   
  

    return 0;
}