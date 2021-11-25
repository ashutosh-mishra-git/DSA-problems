#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    
  string str2="";
  int n=0;
  for(int i=str.size()-1;i>=0;i--){
      str2+=str[i];
     
  }

  return str2;
}



int main(){
	string s;
	cin>>s;
	cout<< reverseWord(s);
}







