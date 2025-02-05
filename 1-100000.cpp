#include <iostream>
using namespace std;

int main(){
	int multi = 1;
	while(multi<=12){
		cout << "------"<<multi<<"------"<<endl;
		for(int i=1;i<=12;i++){
			cout << multi <<" x "<< i <<" = "<<i*multi<<endl;
		}
		multi++;
	}
}
