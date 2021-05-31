#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int test;
    cin>>test;
    while(test--){
        int l,r,x;
        cin>>l>>r>>x;
        for(int i=l; i<=r; i++){
            arr[i] += x;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}