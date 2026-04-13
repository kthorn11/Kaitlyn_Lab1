// Edited directly on GitHub
// Kaitlyn_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Feature by Kaitlyn Thornton: This is a simple C++ program that calculates a student's grade based on their score. The program prompts the user to enter a score, and then it uses a series of if-else statements to determine the corresponding grade (A, B, C, D, or F) and displays it to the user. Additionally, the program includes some print statements to demonstrate collaboration between students A and B, as well as a message about completing Lab 1 on April 8th.

#include <iostream>
using namespace std;

void calculatorGrade(int score) {
	if (score >= 90)
	{
		cout << "Grade: A" << endl;
	}
	else if (score >= 80) {
		cout << "Grade: B" << endl;
	}
	else if (score >= 70) {
		cout << "Grade: C" << endl;
	}
	else if (score >= 60) {
		cout << "Grade: D" << endl;
	}
	else {
		cout << "Grade: F" << endl;
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

	int studentScore;
	cout << "Enter a score to calculate the grade: ";
	cin >> studentScore;

	calculatorGrade(studentScore);

	return 0;
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
