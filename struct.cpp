#include <iostream>

#define MAX_CHAR 50

using namespace std;

struct PersonalRecord{
    int StudentNumber;
    char StudentGrade[MAX_CHAR];
};

int main(){
    PersonalRecord pr;
    cout <<  "Insert Student Number: "; cin >> pr.StudentNumber;
    cin.ignore();
    cout << "Insert Student grade: "; cin.getline(pr.StudentGrade, MAX_CHAR);
    cout << "Details of students as follows:" <<endl;
    cout << "Student Number: " << pr.StudentNumber << endl;
    cout << "Grade: " << pr.StudentGrade;
}

