//Replace pi with 3.14 in the given string

//"pippxxppiixipi"-->"3.14ppxxp3.14ixi3.14

#include<iostream>
using namespace std;

void replacePi(string s){

if(s.length()==0){ //baseCase
return;
	}
	
if(s[0]=='p' && s[1]=='i')
{
	cout<<3.14;
	replacePi(s.substr(2));
}
else {
	cout<<s[0];
	replacePi(s.substr(1));
	}
}

int main()
{
	replacePi("pippppiiiipi");
	return 0;
}
