// Name: Jared Love
// Date: 4/3/2026
// File: grades.h
// Purpose: Declares functions used in the main program
 
#ifndef GRADES_H
#define GRADES_H
 
// TODO: Define enum LetterGrade
enum LetterGrade{A, B, C, D, F};
// TODO: Declare getLetterGrade
LetterGrade getLetterGrade(double score);
// TODO: Declare gradeToChar
char gradeToChar(LetterGrade grade);
#endif