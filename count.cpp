//  Count Frequency in a range
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int> ans;
    unordered_map<int, int> mpp;

    for(int i=0;i<n;i++){
        if(nums[i]>=1 && nums[i] <= x){
            mpp[nums[i]]++;
        }
    }
    
    for(int i=1;i<=n;i++){
        ans.push_back(mpp[i]);
    }
    

    return ans;
}