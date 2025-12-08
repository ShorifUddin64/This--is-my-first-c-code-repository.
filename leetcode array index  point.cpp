#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout<<"Enter your array size :";
    cin >> n;
cout<<"Enter your Number :"<<endl;
    int nums[n];
    for(int i=0; i<n; i++){
     cin >> nums[i];}

cout<<"Entur your Target Number :";
    cin >> target;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == target){
                cout << i << " " << j;
                return 0;
            }

        }
    }
    cout<<"Invalid Sum";
              return 0;
}

