#include<iostream>
using namespace std;
//Find a no is even or odd
int main(){
    int n;
    cin>>n;

    if ((n&1)==0)
    {
        cout<<"Even number"<<endl;
    }else{
        cout<<"Odd number"<<endl;
    }
    
    return 0;
}