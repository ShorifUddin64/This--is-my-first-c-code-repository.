/*Input
2
Output
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20*/
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter your integer: ";
    cin>>x;
    for(int i=1;i<=10;i++){
            int d=x*i;

        cout<<x<<"*"<<i<<"="<<d<<endl;
    }
    return 0;}
