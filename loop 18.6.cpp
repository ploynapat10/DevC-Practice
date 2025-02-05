#include <iostream>
using namespace  std;

int main(){
	int space=0;
	for(int i=7;i>=1;i--){
		for(int s=1;s<=space;s++){
			cout << " ";
		}
		for(int j=1;j<i*2;j++){
			if(j%2==0) cout << "0";
			else cout << "1";
		}
		cout << endl;
		space++;
	}
	return 0;
}
