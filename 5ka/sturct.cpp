#include<iostream>
using namespace std;

struct kani{
  int length;
  int leee;
};
enum godENNUM{
  ONE,
  TWO,
  TWOO,
  THREE
};
int t=0;
void func1(){
  static int a ;
  int b=0;
  cout<< a <<" "<<b<<endl;
  cout<< &a<<" "<<&b<<endl;
}

int main(){
  int t=2;
  kani k ={1,2};
  k.length;
  cout <<(3<2 ?1:2)<<endl;
  godENNUM e =THREE;
  cout << e<<endl;
  cout <<t <<" "<<::t<<endl; 
  func1();
  func1();
}
