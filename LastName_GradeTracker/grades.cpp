// Name: Jared Love
// Date: 4/3/2026
// File: grades.cpp
// Purpose: Defines functions declared in grades.h
 
#include "grades.h"
 
// TODO: Define getLetterGrade

LetterGrade getLetterGrade(char score){
    if (score >= 90){
        return A;
    } else if (score >= 80){
        return B;
    } else if (score >= 70){
        return C;
    } else if (score >= 60){
        return D;
    } else {
        return F;
    }
 }
 
// TODO: Define gradeToChar
char gradeToChar(LetterGrade grade){
    switch(grade){
        case A: return 'A';
        case B: return 'B';
        case C: return 'C';
        case D: return 'D';
        case F: return 'F';
    }
return 0;
}