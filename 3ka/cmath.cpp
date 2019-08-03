#include<cmath>
#include<iostream>
using namespace std;

int main(){
		double a,b;
		double p=0;
		cout <<"a b"<<flush;
		cin >>a >>b;

		cout <<sqrt(a+b)<<"\n";
		cout <<abs(a/b)<<"\n";
		cout <<fabs(a/b)<<"\n";
		cout<<ceil(a/b)<<"\n";
		cout<<floor(a/b)<<"\n";
		cout<<fmod(a,b)<<"\n";
		cout<<modf(a,&p)<<" "<<p<<"\n";
		cout<<pow(a,b)<<"\n";
		cout<<exp(a)<<"\n";
		cout<<log(a)<<"\n";
		cout<<log10(a)<<"\n";
}
