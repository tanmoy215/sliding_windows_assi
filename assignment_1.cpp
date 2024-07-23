#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,2,2,2,5,5,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int th = 4;
    int sum = 0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    float avg = sum/k;
    int count =0;
    if(avg>=th) count++;
    int i=1,j=k;
    while(j<n){
        sum+=arr[j]-arr[i-1];
        avg = sum/k;
        if(avg>=th) count++;
        i++;
        j++;
    }
    cout<<"Final ans is : "<<count<<endl;
    return 0;
}