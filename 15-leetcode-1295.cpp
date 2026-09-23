#include<iostream>
#include<vector>
using namespace std;

int findNumbers(vector<int>& nums){
    int n=nums.size();
    int count = 0;

    for(int i=0;i<n;i++){
        int num=nums[i];
        int digits = 0;
        while(num>0){
            num = num / 10;
            digits++;
        }

        if(digits % 2 == 0){
            count++;
        }
    }
    return count;
}


int main(){
    vector<int>nums = {12,345,2,6,7896};

    cout<<findNumbers(nums)<<endl;
}