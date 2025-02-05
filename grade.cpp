#include <iostream>
#include <string>
using namespace std;

int main(){
	string grade;
	int score;
	cout << "Input total score: ";
	cin >> score;
	if(score>=80) grade = "A";
	else if(score>=75) grade = "B+";
	else if(score>=70) grade = "B";
	else if(score>=65) grade = "C+";
	else if(score>=60) grade = "C";
	else if(score>=55) grade = "D+";
	else if(score>=50) grade = "D";
	else grade = "F";
	cout << "The Grade is " << grade;
	return 0;
} 
