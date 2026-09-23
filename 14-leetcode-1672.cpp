#include<iostream>
#include<vector>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;

            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }

            maxWealth = max(maxWealth, sum);
        }

        return maxWealth;
    }

int main(){
    vector<vector<int>>account={{1,2,3},{4,5,6}};

    cout<<maximumWealth(account);

    return 0;
}