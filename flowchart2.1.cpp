#include <iostream>
using namespace std;

int main(){
	int ar[5];
	int max=0;
	int i=0;
	while(i<5){
		cin >> ar[i];
		i++;
	}
	i=0;
	while(i<5){
		if(ar[i]>max){
			max=ar[i];
		}
		i++;
	}
	cout << max;
	return 0;
}
