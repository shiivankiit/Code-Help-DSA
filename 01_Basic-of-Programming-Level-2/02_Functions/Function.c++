#include<iostream>
using namespace std;

void saymyName(){
    cout<<"Andrew"<<endl;
}

void prnittable(int n){
    for (int i = 0; i <=10; i++)
    {
       cout<<n*i<<endl;
    }
}

int solve(int a,int b){
    int sum=a+b;
    return sum;
}


int calculateTotalsum(int a,int l,int n){
    int ans=((n)*(a+l)/2);
    return ans;
}

void printEvenInsideRange(int start,int end){
    for (int i = start; i <=end; i++)
    {
        int n=i;
        if (!(n&i))
        {
           cout<<n<<endl;
        }
        
    }
    
}

int main(){
printEvenInsideRange(101,140);
saymyName();
prnittable(4);
int ans=solve(6,8);
int finalans=calculateTotalsum(4,5,5);
cout<<finalans<<endl;
cout<<ans<<endl;
return 0;
}