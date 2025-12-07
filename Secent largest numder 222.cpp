#include<iostream>
#include <algorithm>
using namespace std;
int main(){
int arr[9];
int x;
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+x);
cout<<arr[x-2];
return 0;}


