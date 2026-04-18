// Name: Jared Love
// Date: 4/3/2026
// File: grades.h
// Purpose: Declares functions used in the main program
 
#ifndef grades_h
#define grades_h
 
// TODO: Define enum LetterGrade
enum LetterGrade{A, B, C, D, F};
// TODO: Declare getLetterGrade
LetterGrade getLetterGrade(char score);
// TODO: Declare gradeToChar

char gradeToChar(LetterGrade grade);

#endif