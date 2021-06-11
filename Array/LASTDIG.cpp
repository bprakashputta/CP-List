// https://www.codechef.com/problems/LASTDIG
// LASTDIG - Codechef
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        long long int A,B;
        cin>>A>>B;
        long long int dn=0;
        for(int i=A; i<=B; i++){
            long long int temp = i, count=0, sn=0;
            while(temp>0){
                int rem = temp%10;
                if(count%2!=0) sn += 2*rem;
                else sn += rem;
                temp = temp/10;
                count++;
            }
            dn += sn%10;
        }
        cout<<dn<<endl;
    }
return 0;
}