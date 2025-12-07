#include <iostream>
using namespace std;
int main(){
int first_number;
int secend_number;
int x;
int sum;
cout<<"Enter Numder :";
cin>>x;
cout<<"Enter the first number : ";
cin>>first_number;
cout<<"Enter the secend number : ";
cin>>secend_number;
for(int i=0; i<=x;i++){

   cout<<first_number;

    sum=first_number+secend_number;
    first_number=secend_number;
    secend_number=sum;

}return 0;}
