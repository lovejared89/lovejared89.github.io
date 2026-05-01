
using namespace std;

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>


int main(){
    const int MAX_SIZE = 5;
    string names[5] = {"Frank", "Jessie", "Sarah", "Tim", "Miranda"};
    int grades[5] = {82, 78, 90, 93, 97};
    int count = 0;

    for(int count = 0; count < 5; count++){
        cout << "Name: " << names[count] << endl;
        cout << "Grade: " << grades[count] << endl; 
    }


    ifstream inputFile("nameandgrade.txt");

    if(inputFile.is_open()){
        while (count < MAX_SIZE && inputFile >> names[count] >> grades[count]){
            count++;
        }
    }
    inputFile.close();

    int highest = grades[0];
    int lowest = grades[0];

    for (int i = 1; i < 5; i++){
        if(grades[i] > highest) highest = grades[i];
        if(grades[i] < lowest) lowest = grades[i];
    }

    cout << "Highest Grade: " << highest << endl;
    cout << "Lowest Grade: " << lowest << endl;
    
    return 0;
}