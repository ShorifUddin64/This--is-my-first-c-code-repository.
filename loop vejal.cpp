/*7
Output
......1
.....22
....333
...4444
..55555
.666666
7777777*/
#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
for(int i=1;i<=x; i++)
{
    for(int j=x-i;j>0;j--){
        cout<<".";}
        for(int k=1;k<=i; k++){
            cout<<i;
        }
        cout<<endl;

}
 return 0;

}
