#include <iostream>
#include <string>
using namespace std;

int main(){
	string grade;
	int score;
	cout << "Input total score: ";
	cin >> score;
	switch(score){
		case 80 ... 100 : grade = "A";break;
		case 75 ... 79 : grade = "B+";break;	
		case 70 ... 74 : grade = "B";break;	
		case 65 ... 69 : grade = "C+";break;
		case 60 ... 64 : grade = "C";break;
		case 55 ... 59 : grade = "D+";break;
		case 50 ... 54 : grade = "D";break;
		default: grade = "F";break;
	}
	cout << "The Grade is " << grade;
	return 0;	
}
