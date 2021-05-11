// https://www.spoj.com/problems/CSUMQ/
// Question Link

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,Q;
    cin>>N;
    vector<int> arr(N);
    for(int i=0; i<N;i++){
        cin>>arr[i];
    }
    vector<int> prefix(N);
    for(int i=0; i<N; i++){
        if(i==0){
            prefix[i] = arr[i];
        }else{
            prefix[i] = prefix[i-1] + arr[i];
        }
    }
    cin>>Q;
    while(Q--){
        int L,R;
        cin >> L >> R;
        cout << prefix[R]-prefix[L] + arr[L]<< endl;
    }
return 0;
}