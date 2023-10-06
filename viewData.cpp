#include "viewData.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

void viewData() {
    system("clear");

    fstream file("data.csv");

    if (!file)
    {
        cout << "fail in opening the file";
    }
    cout << "\n\t\t\t\t\t\t|Students Record| \n\n";

    cout << "\n-----------------------------------------------------------------------------------------------------------------------\n"
         << endl
         << endl;
    cout << "Roll \t Name \t\t\t College \t branch \t Attendance \t Physics \t Chemistry \t Maths" << endl
         << endl;
    string rollNumber, name, college, branch, attendance, physics, chemistry, maths;

    while (!file.eof()) 
    {
        getline(file, rollNumber, ',');
        getline(file, name, ',');
        getline(file, college, ',');
        getline(file, branch, ',');
        getline(file, attendance, ',');
        getline(file, physics, ',');
        getline(file, chemistry, ',');
        getline(file, maths, '\n');

        cout << rollNumber << " \t " << name << "\t\t\t" << college << " \t\t" << branch << " \t\t" << attendance << " \t\t" << physics << " \t\t" << chemistry << " \t\t" << maths << endl;
        cout << endl;
    }

    cout << "\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    file.close();

    cout << "\n\n 1. Add Record\n";
    cout << " 2. Delete Record\n";
    cout << " 3. Update Record\n";
    cout << " 5. Main Menu\n";
    cout << " 6. Exit\n";
    cout << "\nEnter choice : ";
}