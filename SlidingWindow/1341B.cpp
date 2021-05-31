#include<iostream>
#include<vector>
using namespace std;

void codeforces1341B(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        int l=0, r=k-1;
        int maxp = 0, peaks=0;
        for(int i=l+1; i<r; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                peaks++;
            }
        }
        maxp = peaks;
        int ind = l;

        //here we are applying the sliding window technique
        //to find peaks and compare with max peaks
        while(r<n-1){
            l++;
            //arr[l] could have been a peak in the previous
            //iteration
            if(arr[l]>arr[l-1] && arr[l]>arr[l+1]){
                peaks--;
            }
            //arr[r] could be a peek in this iteration
            if(arr[r]>arr[r-1] && arr[r]>arr[r+1]){
                peaks++;
            }
            r++;
            if(peaks>maxp){
                maxp = peaks;
                ind = l;
            }
        } 
        cout<<maxp+1<<" "<<ind+1<<endl;
    }
}

int main(){
    codeforces1341B();
}