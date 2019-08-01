#include<iostream>
using namespace std;

void sansyou(int &sansyou,int atai){
        sansyou = sansyou*2;
        atai = atai*2;
        cout << sansyou<<"\n" ;
        cout << atai <<"\n";
}

int main(){
        int x=10;
        int y=10;
        sansyou(x,y);
        sansyou(x,y);
}
