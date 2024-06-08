#ifndef AI_H
#define AI_H
#include <iostream>
#include <vector>
using namespace std;
struct music{
	int to[8];
	int maxx;
	int maxx2;//第二大
	bool choose=false;
}m[8];
void init(){
	freopen("music.in","r",stdin);
	int a,b;//音符，1do，以此类推,b保存上一个
	bool flag=false;
	while(cin>>a){
		if(!flag){
			b=a;
		}
		if(flag){
			m[a].to[b]++;
			m[b].to[a]++;
		}
		flag=~flag;
	}
	for(int i=1;i<=7;i++){
		m[i].maxx=INT_MIN;
		m[i].maxx2=INT_MIN;
		for(int j=1;j<=7;j++){
			if(m[i].to[j]>m[i].maxx){
				m[i].maxx=m[i].to[j];
			}
		}
		for(int j=1;j<=7;j++){
			if(m[i].to[j]>m[i].maxx2&&m[i].to[j]!=m[i].maxx){
				m[i].maxx2=m[i].to[j];
			}
		}
	}//求最大和第二大
	freopen("CON","r",stdin);
}
vector<int> m_text;
void start(int n,int st){
	m_text.push_back(st);
	int in=st;
	for(int i=2;i<=n;i++){
		if(m[in].choose){
			in=m[in].maxx2;
		}
		else{
			in=m[in].maxx;
		}
		m_text.push_back(in);
	}
	return;
}
#endif
