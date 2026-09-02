#include <iostream> 
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std; 
int main(){
	freopen("measurement.in","r",stdin);
	freopen("measurement.out","w",stdout);
	int n; 
	cin>>n;
	vector<tuple<int, string, int>> v(n);
	for (int i=0; i<n; i++){
		cin>>get<0>(v[i])>>get<1>(v[i])>>get<2>(v[i]);
	} 
	vector<int> m(3,7); 
	sort(v.begin(),v.end()); 
	int c=0;
	int b=7; 
	vector<tuple<int,int,int>> p(n);
	for(int i=0; i<n; i++){ 
		if (get<1>(v[i])=="Bessie"){
			m[0] += get<2>(v[i]); 
		}
		else if(get<1>(v[i])=="Elsie"){ 
			m[1] += get<2>(v[i]);
		}
		else{ m[2] += get<2>(v[i]); 
		}
		b= *max_element(m.begin(),m.end());
			if(m[0]==b){
				get<0>(p[i])=1;
			} 
			else{ 
				get<0>(p[i])=0;
			}
			if(m[1]==b){
				get<1>(p[i])=1;
			}
			else{
				get<1>(p[i])=0;
			}
			if(m[2]==b){
				get<2>(p[i])=1;
			}
			else{
				get<2>(p[i])=0;
			}

		}
	
	for( int i=0; i<n-1; i++){
		if (p[i]!=p[i+1]){ c++; 
		}
	} 
	cout<<c+1<<"\n"; 
	return 0; 
}
