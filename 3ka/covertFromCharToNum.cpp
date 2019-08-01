#include<iostream>
using namespace std;

void charset(char cs){
	char c;
	cin >> c;
	cout <<c << " is "<< (int)(unsigned char)c <<"\n";
}

int main(){
	charset('a');
	return 0;
}
