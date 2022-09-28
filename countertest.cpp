#include<iostream>
using namespace std;
int main()
{
    int total,          // sum of all grades
        gradeCounter,   // n° of inputted grades
        grade,          // a single vote
        average;        // average of grades

        // initialization phase
        total = 0;              //sets the total to zero
        gradeCounter = 1;       //prepares the counter

    // elaboration phase
    while ( gradeCounter <= 10 ) { // 10 times cycle    
        cout << "Enter grade: "; // input prompt
        cin >> grade;            // input grade
        total = total + grade;   // adds the grade to the total
        gradeCounter = gradeCounter + 1; // increases the counter
    }

    // end phase
    average = total / gradeCounter;
    cout << "The class average is " << average << endl;

    return 0;
}