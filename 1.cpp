#include<iostream>
#include<vector>
using namespace std;

int simpleSearch(){
	int N;
	cin>>N;
	vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
	int K;
	cin>>K;
	// int res = 0;
	for(int i=0; i<N; i++){
		if(arr[i] == K){
			// res = i;
            cout<<i<<endl;
			break;
		}
	}
	// return res;
}

int main(){
	simpleSearch();
    
return 0;
}