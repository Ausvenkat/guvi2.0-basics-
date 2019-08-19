#include <iostream>
#include <string>
using namespace std;

int main() {
	int temp,i;
	string s;
	cin>>s;
	for(i=0;i<s.length();i=i+2){
		temp=s[i];
		s[i]=s[i+1];
		s[i+1]=temp;
	}
	cout<<s;
	return 0;
}
