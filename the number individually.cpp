/*Example 1:
Input: 12345
Output:
1
2
3
4
5 */
#include<iostream>
#include<string.h>
using namespace std;
int main (){
string x;
int s;
int y;
cout<<"Enter your integer:";
cin>>x;
s=x.length();
//s=x;
for (int i=0;i<s;i++)
{
    cout<<x[i]<<endl;
}
return 0;}




