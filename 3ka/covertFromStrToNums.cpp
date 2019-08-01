#include<iostream>
using namespace std;

void charset(char c){
	cout <<c << " is "<< (int)(unsigned char)c <<"\n";
}

void toInt(char s[]){
	for(int i=0;i<sizeof s;i++){
		cout << sizeof s;
		charset(s[i]);
	}
}

int main(){
	char ss[] = "abcdeaaaaaaaaaa";
	for(int i=0;i<sizeof ss;i++){
		cout << sizeof ss;
		charset(ss[i]);
	}
	return 0;
}
