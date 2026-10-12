#include<iostream>
#include<cmath>
using namespace std;

//--Divison method
// int main(){

//     int n;
//     cin>>n;
//     //Geaves you the remainder.
//     int i=0;
//     int rev=0;
//     while (n>0)
//     {
//      int bit=n%2;
//      rev=bit*pow(10,i)+bit;
//      n=n/2;
//      i++;
//     } 
//     cout<<rev<<endl;
//     return 0;
// }

//Bitwise Method.

int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while (n>0)
    {
       int bit=(n & 1);
       ans=bit*pow(10,i++)+ans;
       n=n>>1;
    }
    cout<<ans<<endl;
}