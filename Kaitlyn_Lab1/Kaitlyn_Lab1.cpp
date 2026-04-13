// Edited directly on GitHub
// Kaitlyn_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void pass_fail_check(int grade)
{
    //Feature by Landon: Pass-Fail-Check - Checks if grade is above 70
    if (grade >= 70)
    {
        cout << "Passed";
    }
    else
    {
        cout << "Failed";
    }
}

int main()
{
    std::cout << "Hello from student B !" << endl;
    std::cout << "Hello from Student A!" << endl;
    cout << "Git makes collaboration easy!" << endl;
    cout << "Changes made by Landon!" << endl;
    cout << "Lab 1 completed on April 8th!" << endl;
    cout << "Feature by Kaitlyn Thornton: Branching is awesome!" << endl;

    int studentScore = 0;
    cout << "Enter score: ";
    cin >> studentScore;

    pass_fail_check(studentScore);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
