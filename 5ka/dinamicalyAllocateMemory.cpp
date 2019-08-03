#include<iostream>
using namespace std;

int main(){
  int *p = new int;
  *p =10;
  cout<<*p<<endl;
  delete p;

  int* ps = new int[1000];
  ps[1] =100;
  cout <<ps[1]<<endl;
  delete[] ps;
}
