#include <iostream>
using namespace std;

int main(){
	int k = 5;
	int space = 0;
	for(int i=1;i<=5;i++){
		for(int s=1;s<=space;s++){
			cout << "*";
		}
		for(int j = 1; j <= i+space; ++j){
            cout << k;
        }
        --k;

		cout << endl;
		space++;
	}
	return 0;
} 
