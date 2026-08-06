#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);

	vector<int> c(3);
	vector<int> a(3);
	for(int i=0; i<6; i++){
		if(i%2==0){
			cin>>c[i/2];
		}
		else{
			cin>>a[(i-1)/2];
		}
	}
	for(int i=0; i<100; i++){
		int d= min(a[i%3],c[(i+1)%3]-a[(i+1)%3]);
		a[i%3] -= d;
		a[(i+1)%3] += d;
	}
	for(int i=0; i<3; i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}

