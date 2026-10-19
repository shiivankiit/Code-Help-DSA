#include<iostream>
using namespace std;

//-------------------------------if-else.
int main(){
int age=10;

if (age>=18)
{
    cout<<"You can vote"<<endl;
}else{
    cout<<"You can not vote"<<endl;
}

//-----------------------------------Ternary-operator.
int money=10;
cout<<((money>5)?"bhot ameer ho":"chalo coding seekhte hai");

//------------------------------------if-else-if.

    int score = 85;

    cout << "Your score is: " << score << endl;

    if (score >= 90) {
        cout << "Grade: A" << endl;
    } 
    else if (score >= 80) {
        cout << "Grade: B" << endl; 
    } 
    else if (score >= 70) {
        cout << "Grade: C" << endl;
    } 
    else {
        cout << "Grade: F" << endl;
    }

    return 0;

//-----------------------------------------Nested-if.
  int age2 = 20;
    bool hasLicense = true;

    if (age2 >= 18) { 
        cout << "Age verification passed." << endl;

      
        if (hasLicense) { 
            cout << "You are allowed to drive." << endl;
        } else {
            cout << "You are old enough, but you need a license." << endl;
        }
    } else {
        cout << "You are too young to drive." << endl;
    }

//--------------------------------------------Switch-case.

 char grade;
 cout<<'Enter your grade'<<endl;
 cin>>grade;

 switch (grade)
 {
    case 'A':cout<<"You got >90%"<<endl;
    break;
    case 'B':cout<<"You got >80%"<<endl;
    break;
    case 'C':cout<<"You got >70%"<<endl;
    break;

    default:cout<<"Bhai tu to fail ho gya";
 }



}