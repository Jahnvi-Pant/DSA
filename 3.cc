//Print Array  in Pattern: 
//arr={a1,a2,a3,a4,x1,x2,x3,x4}
//new arr={a1,x1,a2,x2,a3,x3,a4,x4} 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mid=n/2;
    int a[mid],b[mid];
    for(int i=0;i<mid;i++){a[i]=arr[i];b[i]=arr[i+mid];}
    int k=0,l=0;
    for(int i=0;i<n;i++){
        if(i%2==0){arr[i]=a[k];k++;}
        else {arr[i]=b[l];l++;}
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}

// output:
// 8
// 1 2 3 4 5 6 7 8
// 1 5 2 6 3 7 4 8 