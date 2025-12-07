#include <iostream>
using namespace std;
int main()
{
    char expression;
    cout<< "Enter your Expression, using the light color's first character: ";
    cin>> expression;

    switch(expression)
    {

    case 'R':
        cout<< "Stop!"<<endl;
        break;
    case 'G':
        cout<< "Go."<<endl;
        break;
    case 'Y':
        cout<< "Slow"<<endl;
        break;
    default:
        cout<< "Invalid expression!"<<endl;
    }
    return 0;
}
