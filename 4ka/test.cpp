#include<cctype>
#include<iostream>
using namespace std;

int main(){
	int a=0;
	int* ap;
	ap = &a;
	int b[4]={1,2,3,4};
	cout << &a<<endl;
	cout << ap<<endl;
	cout << b <<endl;
	cout<<&b[1] -&b[0]<<endl;
}
