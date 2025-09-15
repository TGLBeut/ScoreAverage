/* file name : ScoreAverage.cpp :
* Programmer: Sean Greene
* Requirements:
*Ask for three scores and display average.
*/
#include <iostream>
using namespace std;

int main()
{
	int score1, score2, score3, sum;
	double average;
	cout << "Please enter your first score: ";
	cin >> score1;
	cout << "Please enter your second score: ";
	cin >> score2;
	cout << "Please enter your third score: ";
	cin >> score3;
	average = score1 + score2 + score3 / 3.0;

	cout << "Your average is " << average;
}


