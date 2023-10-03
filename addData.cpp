void addData() {
    system("cls");
    fstream file("data.csv", ios::out | ios::app);
    if (!file)
    {
        cout << "\nFailed to open data.csv / data.csv file not found!";
    }

    else
        cout << "\t|Enter Data|" << endl
             << endl;

    string rollNumber, name, college, branch, attendance, physics, chemistry, maths;
    string moreData;

    cout << "\nEnter Student's roll Number : ";
    cin >> rollNumber;
    file << "\n"
         << rollNumber << ", ";

    cout << "\nEnter Studnet's Name : ";
    cin >> name;
    file << name << ", ";

    cout << "\nEnter College : ";
    cin >> college;
    file << college << ", ";

    cout << "\nEnter Branch : ";
    cin >> branch;
    file << branch << ", ";

    cout << "\nEnter Attendance : ";
    cin >> attendance;
    file << attendance << ", ";

    cout << "\nEnter Physic's Marks : ";
    cin >> physics;
    file << physics << ", ";

    cout << "\nEnter Chemistry Marks : ";
    cin >> chemistry;
    file << chemistry << ", ";

    cout << "\nEnter Maths Marks : ";
    cin >> maths;
    file << maths;

    file.close();

    cout << "\nAdd more Record? (Y / N) : ";

    cin >> moreData;
    if (moreData == "y" || moreData == "Y" || moreData == "yes" || moreData == "Yes")
    {
        addData();
    }
    else if (moreData == "n" || moreData == "N" || moreData == "no" || moreData == "No")
        adminFunction();

    else
        cout << "\nEnter a valid option";

    adminFunction();
}