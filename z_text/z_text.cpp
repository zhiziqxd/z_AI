#include <iostream>
#include <map>
#include <vector>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
class AI{
	private:
	map<string,vector<string> >text;
	public:
	void learn(string str){
		string word="",left="";
		for(int i=0;i<str.length();i++){
			if(str[i]!=' '){
				word+=str[i];
			}
			else{
				if(left!=""){
					text[left].push_back(word);
				}
				left=word;
				word="";
			}
		}
		if(!word.empty()){
      text[left].push_back(word);
    }
		return;
	}
	void rout(string first_word){
		cout<<first_word<<" ";
		int len=7;
		string word=first_word;
		while(len--){
			if(text[word].size()==0){
				cout<<endl;
				return;
			}
			int r=rand()%text[word].size();
			cout<<text[word][r]<<" ";
		}
		cout<<endl;
		return;
	}
	bool state(){
		return text.size();
	}
};
int main(){
	//test
	srand(time(0));
	AI z_AI;
	freopen("learn.txt","r",stdin);
	string l;
	while(cin>>l){
		z_AI.learn(l);
	}
	for(int i=1;i<=5;i++){
		z_AI.rout("I");
	}
	return 0;
}
