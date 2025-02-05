#include <iostream>
using namespace std;

int main(){
	int k = 1;
	int space = 0;
	for(int i=1;i<=5;i++){
		for(int j = 5; j >= i; --j){
            cout << k;
        }
		for(int s=0;s<=space;s++){
			cout << "*";
		}
        ++k;

		cout << endl;
		space++;
	}
	return 0;
} 
