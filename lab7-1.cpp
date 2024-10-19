//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // Declare an array to store test scores
    const int SIZE = 5; // Assume there are 5 test scores
    int testScores[SIZE];
    int sum = 0;
    double average;

    // Input test scores
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter score " << (i + 1) << ": ";
        cin >> testScores[i];
    }

    // Calculate the sum of the scores
    for (int i = 0; i < SIZE; i++) {
        sum += testScores[i];
    }

    // Calculate the average
    average = static_cast<double>(sum) / SIZE;

    // Output the sum and average
    cout << "The sum of the scores is: " << sum << endl;
    cout << "The average score is: " << average << endl;

int main()
{	

    return 0;
}   //end of main function
