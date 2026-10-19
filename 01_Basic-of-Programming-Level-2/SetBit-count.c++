#include<iostream>
using namespace std;

int main(){
    int no=10;
    int setBitCount=0;

    while (no!=0)
    {
        int lastbit = (no&1);
      if (lastbit == 1)
      {
        setBitCount++;
      }
      no=no>>1;
    }
    cout<<"Total set bits: "<<setBitCount<<endl;
    return 0;
}