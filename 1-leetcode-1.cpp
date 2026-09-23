// Two sum

#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,2,3,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=7;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<" "<<i<<" "<<j;
            }
        }
    }
    
}