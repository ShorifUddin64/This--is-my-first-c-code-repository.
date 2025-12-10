/*Example 1
Input:
Enter the first number: 12
Enter the second number: 9
Enter the third number: 25
Output:
Largest number: 25*/
#include<iostream>
using namespace std;

int main (){
int x,y,z;
cout<<"Enter the first number: ";
cin>>x;
cout<<"Enter the second number: ";
cin>>y;
cout<<"Enter the third number: ";
cin>>z;

if(x>y){
    if(x>z){cout<<"Largest number: "<<x<<endl;}
}
else if(y>x){
    if(y>z){cout<<"Largest number: "<<y<<endl;}}

    else{cout<<"Largest number: "<<z<<endl;}
    return 0;
    }





