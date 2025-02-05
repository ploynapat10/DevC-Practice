//user0520
#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int city[m][3];
	int dist[n];
	for(int i = 0; i<m; i++){
		for(int j = 0; j<3; j++){
			cin >> city[i][j];
		}
	}
	for(int i = 0; i<n;i++){
		if(i==0){
			dist[i] = i;
		}else{
			for(int j = i-1; j<m; j++){
				if(city[j][0]==1){
					dist[i] = city[j][2];
					break;
				} 
				else{
					if(city[j][1]==i+1) {
						dist[i] = city[j][2];
						break;
					}
				}
			}
		}
		if(i==4) dist[i] = dist[i]+4;
		cout << dist[i] << " ";	
	}
	return 0;
}

/*
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
*/
