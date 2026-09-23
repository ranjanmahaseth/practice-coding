#include <iostream>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int n = candies.size();
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (candies[i] > max)
        {
            max = candies[i];
        }
    }

    vector<bool> ans;

    for (int i = 0; i < n; i++)
    {
        if ((candies[i] + extraCandies) >= max)
        {
            ans.push_back(true);
        }
        else
        {
            ans.push_back(false);
        }
    }
    return ans;
}
int main()
{
    vector<int> candies = {2, 3, 5, 1, 3};
    vector<bool>ans = kidsWithCandies(candies, 3);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}