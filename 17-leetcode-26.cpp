#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int n=nums.size();

    int count=1;

    for(int i=1;i<n;i++){
        if(nums[i]!=nums[i-1]){
            nums[count]=nums[i];
            count++;
        }
    }
    return count;
}

int main(){
    vector<int>nums={1,1,2,3};
    cout<<removeDuplicates(nums);
}