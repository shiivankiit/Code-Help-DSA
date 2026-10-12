#include<iostream>
using namespace std;

int main(){

    //int to float
    // int num1=10;
    // float num2=20.5;

    // float result=num1+num2;//Implicit conversion.
    // cout<<result<<endl;

    //char to int.
    // char ch='A';
    // int a=ch+1;
    // cout<<a<<endl;

    //int to char
    // int a=97;
    // char ch='a';
    // cout<<ch<<endl;

    //Explicit Type casting.
    int num1=10;
    float num2=10.5;
    float result=num1+int(num2);
    cout<<result<<endl;

    double pi=3.14159265;
    int intpi=(int)pi;
    cout<<intpi<<endl;

    float floatingno=65.5;
    char charvalue=(char)floatingno;
    cout<<charvalue<<endl;
     
    //Divison has some bonus points to remember.
    int a=10;
    int b=3.0;

    float c=a/((float)b);//Explicit conversion from int to float.
    cout<<c<<endl;

    return 0;
}