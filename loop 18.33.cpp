#include <iostream>
using namespace std;

int main(){
	int space=0;
	for(int i=1;i<=3;i++){
		for(int s=1;s>=space;s--){
			cout << " ";
		}
		for(int j=1;j<=1+space;j++){
			cout << "*";
		}
		for(int j=2;j<=1+space;j++){
			cout << "*";
		}
		for(int s=1;s<=space;s++){
			cout << " ";
		}
		cout << endl;
		space++;
	}
	return 0;
}
