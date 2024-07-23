#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[] = {2,1,4,3,5};
     int k = 10;
     long long int i = 0, j = 0, sum = 0, score = 0, ans = 0;
        long long int n =  sizeof(arr)/sizeof(int);
        while (i < n && j < n) {
            sum += arr[j]; // window expansion
            score = sum * (j - i + 1);
            while (i <= j && score >= k) {
                // window contraction
                sum -= arr[i++];
                score = sum * (j - i + 1);
            }
            ans += (j - i + 1);
            j++;
        }
        cout<<"Final ans is : "<<ans<<endl;
    return 0;
}