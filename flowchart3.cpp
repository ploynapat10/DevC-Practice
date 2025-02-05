#include <iostream>
using namespace std;

int main(){
	int c=0;
	int i=1;
	while(i<=5){
		int j=1;
		while(j<=i){
			j++;
			c++;
		}
		i++;
	}
	cout << c;
	return 0;
} 
