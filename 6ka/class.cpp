#include<iostream>
using namespace std;

class Cs{
  public:
    int t;
    void show();
    Cs(int num);
};
void Cs::show(){
  cout <<t<<endl;
};
Cs::Cs(int num){
  t=num;
}

int main(){
  Cs c(100);
  c.show();
}
