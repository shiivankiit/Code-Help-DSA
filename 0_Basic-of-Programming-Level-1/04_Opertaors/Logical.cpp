#include<iostream>
using namespace std;

int main(){

    int cond1=(10>5);
    int cond2=(50>40);
    int cond3=(30>20);
    //And.
    cout<<(cond1&&cond2&&cond3)<<endl;
    //Or.
    cout<<(cond1&&false&&cond3)<<endl;
    //NOT
    cout<<(!false)<<endl;
    
    return 0;
}