#include<iostream>
#include<vector>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        long int N;
        cin>>N;
        vector<long int> arr(N);
        for(long int i=0; i<N; i++)cin>>arr[i];
        vector<long int> pre(N);
        pre[0] = arr[0];
        for(long int i=1; i<N; i++){
            if(arr[i] == -1){
                arr[i] = pre[i-1]/i;
                pre[i] = pre[i-1] + arr[i];
            }else{
                pre[i] = pre[i-1] + arr[i];
            }
        }
        for(long int i=0; i<N; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}