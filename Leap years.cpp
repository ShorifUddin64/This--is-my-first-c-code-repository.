/*Sample 3
Input
2024
Output
Leap Year*/
#include <iostream>
using namespace std;
int main (){
int x;
cout<<"Input"<<endl;
cin>>x;
if(x%400==0||x%4==0&&x%100!=0){
    cout<<"Leap year"<<endl;
}else {cout<<"Not Leap year";
}return 0;



}
