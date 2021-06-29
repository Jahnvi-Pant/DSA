#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int i=0,j=i+1,c=0;
while(i<n && j<n){
    if(arr[i]==arr[j]){
        j++;
        c++;
    }
    if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }  
}
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
return 0;
}