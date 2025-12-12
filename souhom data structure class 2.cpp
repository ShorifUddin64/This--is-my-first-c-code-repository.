#include<iostream>
using namespace std;
int main()
{
    int i,j,lr1=0,rl2=0,a[3][3]={1,2,3,4,5,6,7,8,9};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i==j)
            {
               lr1+=a[i][j];
            }
        }
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            {
                rl2+=a[i][j];
            }
        }
    }
    cout<<"the sum of main diagonal is ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
               cout<<a[i][j];
                if(i<2&&j<2)
        {
         cout<<" + ";
        }
            }
        }
    }
    cout<<" = "<<lr1<<endl;
    cout<<"the sum of secondary diagonal is ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            {
               cout<<a[i][j];
                if(i<2&&j>0)
        {
         cout<<" + ";
        }
            }
        }
    }
    cout<<" = "<<rl2<<endl;

}
