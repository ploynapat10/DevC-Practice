#include <iostream>
using namespace std;

int main(){
	int space = 0;
	for(int i=5;i>=1;i--){
		for(int s=1;s<=space;s++){
			cout << " ";
		}
		for(int j=1+space;j<=9-space;j++){
			cout << j;
		}
		cout << endl;
		space++;
	}
	return 0;
} 
