#include <iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=6;j++){
			if(j<i || j>i+1) cout << " ";
			else cout << j;
		}
		for(int j=6;j>=1;j--){
			if(j<i || j>i+1) cout << " ";
			else cout << j;
		}
		cout << endl;
	}
	return 0;
}
