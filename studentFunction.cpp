void studentFunction()
{

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

    while (!file.eof()) // file.eof() = detects as how long the f
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
    system("pause");
    mainMenu();
}