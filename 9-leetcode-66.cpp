#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> digits ={1,2,3};
    int n=digits.size();

    for(int i=n-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            break;
        }
        digits[i]=0;
    }
 
    if(digits[0]==0){
          digits.insert(digits.begin(),1);
    }

    for(int x : digits){
        cout << x << " ";
    }

    return 0;

}