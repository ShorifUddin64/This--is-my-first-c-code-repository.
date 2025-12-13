#include<iostream>
using namespace std;



void Merge(int l[], int r[], int A[],int nn, int nn)
{
    int nL = nn;
    int nR= nn;

    int i=0;
        int j=0;
    int k=0;
    while(i<nL && j<nR){
        if(l[i]<r[i]){
            A[i]=l[i];
            i++;
        }else{
            A[k] = r[j];
            j++;
        }
        k++;
    }

    while(i<nL){
        A[k] =l[i];
        i++;
        k++;
    }

    while(j<nR){
        A[k]=r[j];
        j++;
        k++;
    }
}
void merge_sort(int A[], int n){
    int n= this.n;

    if(n<2) return;

    int mid = n/2;
    int l[mid];
    int r[n-mid];


    for(int i=0; i<mid;i++)
    {
        l[i]=A[i];
    }
    for(int i=mid;i<n;i++)
    {
        r[i-mid] = A[i];
    }


    merge_sort(l);
    merge_sort(r);
    Merge(l,r,A);


}




int main(){
    int n=6;
    int arr[n];

    for(int i= 0; i<n; i++)
    {
        cin>>arr[i];

    }
    merge_sort(arr, n);

    for(int j = 0; j<n; j++})
    {
        cout<<arr[i];
    }


    return 0;

}
