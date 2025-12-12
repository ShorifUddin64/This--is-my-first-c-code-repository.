#include<iostream>
using namespace std;
int main()
{
    int i,j,r=0,c=0,lr1=0,rl2=0,a[3][3]={1,2,3,4,5,6,7,8,9};
    cout<< "the spiral order would be: ";

    for(j=0;j<3;j++)
    {
        cout<<a[0][j]<<" ";
    }
     for(i=1;i<3;i++)
    {
        cout<<a[i][2]<<" ";
    }
    for(j=1;j>=0;j--)
    {
        cout<<a[2][j]<<" ";
    }
    for(i=1;i>0;i--)
    {
        cout<<a[i][0]<<" ";
    }
    for(j=1;j<2;j++)
    {
        cout<<a[1][j]<<" ";
    }

}
