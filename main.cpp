// Name: Jared Love
// Date: 4/3/2026
// File: main.cpp
// Purpose: Compile and run the program that takes a student's name and score and returns an average and letter grade.
 
#include <iostream>
#include <iomanip>
#include <string>
#include "grades.h"
#include "stats.h"
using namespace std;
 
int main()
{
    // TODO: Declare studentName
    string studentName;
    // TODO: Declare MAX_SCORES, score, total, count
    const MAX_SCORES = 5;
    const double score;
    const total(double, 0.0);
    const count(int, 0);
    // TODO: Prompt and read studentName
    cout << "Enter the Student's Name: ";
    cin >> studentName;

    // TODO: Display instructions
    cout << "Enter a number up to " << MAX_SCORES << "scores, enter -1 to stop: ";


    // TODO: while loop — collect scores
    while(count < MAX_SCORES){
        cout << "Enter the scores of the student: " << (count + 1);
        cin >> score;
        if(score < 0 || score > 100){
            cout << "Error enter a valid score. "
        }

        if(score == -1){
            break;
        }
    }

    // TODO: Guard against no input
     if (count == 0){
        cout << "No scores entered. " endl;
        return 1;
    }
    // TODO: Compute average and grade
    double average = computeAverage(total, count);
    LetterGrade grade = getLetterGrade(average);
    // TODO: Print report
    cout << fixed << setprecision(2);
    cout << "--- Report for "<< studentName << " ---" << endl;
    cout << "Scores entered    : " << count << endl;
    cout << "Total points      : " << endl;
    cout << "Average           : " << average << endl;
    cout << "Letter grade      : " << gradeToChar(grade) << endl;

    return 0;
}