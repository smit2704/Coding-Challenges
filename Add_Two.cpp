#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]!=nums[j] && nums[i]+nums[j]==target){
                    a.push_back(i);
                    a.push_back(j);
                }
            }
        }
        return a;
    }
};
int main(){
    Solution s2;
    vector<int> a{2,4,6,8};
    cout<<s2.twoSum(a,10)[0]<<s2.twoSum(a,10)[1]<<endl;
    return 0;
}