#include <iostream>
//#include <cmath>

using namespace std;

int xx1,xx2,yy1,yy2,r1,r2;
int dist1,dist2,dist3;
int ans;

int main(){
	int T;
	cin>>T;
	for(int tc=1;tc<=T;tc++){
		cin>>xx1>>yy1>>r1>>xx2>>yy2>>r2;
		dist1 = (xx1-xx2)*(xx1-xx2)+(yy1-yy2)*(yy1-yy2);
		dist2 = (r1+r2)*(r1+r2);
		dist3 = r1>r2 ? (r1-r2)*(r1-r2):(r2-r1)*(r2-r1);
		if(dist1==0){
			if(r1==r2) ans=-1;
			else ans=0;
		}
		else if(dist1==dist2) ans=1;
		else if(dist1>dist2) ans=0;
		else if(dist1<dist2) {
			if(dist3>dist1) ans=0;
			else if(dist3==dist1) ans=1;
			else ans=2;
		}
		cout<<ans<<"\n";
	}	
	
	return 0;
}
