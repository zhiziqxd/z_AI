#include <iostream>
#include <limits.h>
using namespace std;
bool x[200][200];
int x1,x2;
int ans;
int maxx1=INT_MIN,maxx2=INT_MIN,minn1=INT_MAX,minn2=INT_MAX;
void init(){
	freopen("matrix.in","r",stdin);
	cin>>ans;
	for(int i=1;i<=ans;i++){
		cin>>x1>>x2;
		cin>>x[x1][x2];
		if(x[x1][x2]){
			maxx1=max(maxx1,x1);
			maxx2=max(maxx2,x2);
			minn1=min(minn1,x1);
			minn2=min(minn2,x2);
		}
	}
	freopen("CON","r",stdin);
}
int main(){
	init();
	int a,b;
	while(a!=0||b!=0){
		cin>>a>>b;
		if(a>=minn1&&a<=maxx1&&b>=minn2&&b<=maxx2){
			cout<<"true"<<endl;
		}
		else{
			cout<<"false"<<endl;
		}
	}
	return 0;
}
