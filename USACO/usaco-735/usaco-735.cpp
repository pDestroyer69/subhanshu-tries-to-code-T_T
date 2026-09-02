#include <iostream>
#include <cmath>
using namespace std;
int main(){
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);
	int x,y;
	cin>>x>>y;
	if(x<y){
		int d=y-x;
		int k= floor(log2(d));
		if (k%2==0){
			cout<<pow(2,k+3)-2+d<<"\n";
		}
		else{
			cout<<pow(2,k+2)-2+d<<"\n";
		}
	}
	if(x==y){
		cout<<0;
	}
	if(x>y){
		int d=x-y;
		int k= floor(log2(d));
		if (k%2==1){
			cout<<pow(2,k+3)-2+d<<"\n";
		}
		else{
			cout<<pow(2,k+2)-2+d<<"\n";
		}
	}
	return 0;
}


