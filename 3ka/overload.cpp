#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
double func(double a){
 	return sin(a);
}
int func(int a){
	return abs(a);
}
void func(char a){
	cout << a<<endl;
}
void func(bool a){
	cout << a+a<<endl;
}
int main(){
	srand((unsigned int)time(NULL));
	int r =rand();
	if(r%4==0){
		double a=10.0;
		cout <<func(a)<<endl;
		
	}
	else if(r%3==1){
		int a=10;
		cout<<func(a)<<endl;
	}
	else if(r%3==2){
		bool a=true;
		func(a);
	}
	else{
		char a=100;
		func(a);
	}
}
