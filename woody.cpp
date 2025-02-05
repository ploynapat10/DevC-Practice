#include <iostream>
using namespace std;

int main(){
	int N,X,Y,MIN=-1;
	cin >> N >> X >> Y;
	int x[N],y[N],c[N],Rx=0,Ry=0,Rc=0;
	for(int i=0;i<N;i++){
		cin >> x[i]>>y[i]>>c[i];
		if(x[i]>=X&&y[i]>=Y) MIN=c[i];
	}
  for(int i=0;i<N;i++){
    if(x[i]>=X&&y[i]>=Y) continue;
    if(Rx<X || Ry<Y){
      Rx = Rx+x[i];
      Ry = Ry+y[i];
    	Rc = Rc+c[i];
    }
    if(Rx>=X&&Ry>=Y){
      MIN = Rc;
      break;
    } 
  }
  cout << MIN;
}
