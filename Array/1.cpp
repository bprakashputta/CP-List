#include<iostream>
#include<vector>
using namespace std;

//sort an array of 0,1 and 2's only without 
//using any extra space
void sortColors(vector<int>& nums) {
    int l = 0;
    int m = 0;
    int r = nums.size()-1;
    int i=0;
    while(m<=r){
        if(nums[m] == 0){
            l++;
            m++;
        } else if(nums[m] == 1){
            m++;
        } else if(nums[m] == 2){
            int temp = nums[r];
            nums[r] = nums[m];
            nums[m] = temp;
            r--;
        }
    }
}

int main(){

return 0;
}