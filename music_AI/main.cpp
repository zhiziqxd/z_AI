#include "music.h"
using namespace std;
int main(){
	init();
	int n;
	cout<<"�����������:";
	cin>>n;
	cout<<"ĿǰĬ��Ϊc���"<<endl;
	start(n,1);
	for(int i=0;i<m_text.size();i++){
		if(m_text[i]==1){
			cout<<"do ";
		}
		if(m_text[i]==2){
			cout<<"re ";
		}
		if(m_text[i]==3){
			cout<<"mi ";
		}
		if(m_text[i]==4){
			cout<<"fa ";
		}
		if(m_text[i]==5){
			cout<<"so ";
		}
		if(m_text[i]==6){
			cout<<"la ";
		}
		if(m_text[i]==7){
			cout<<"xi ";
		}
	}
	return 0;
}
