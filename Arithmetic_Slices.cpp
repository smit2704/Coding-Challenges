#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int *diff=new int [nums.size()];
        int a=0,temp=0; 
        for(int i=1,j=0;i<nums.size();j++,i++){
            diff[j]=nums[i]-nums[i-1];
        }
        for (int i = 0; i < nums.size()-1; i++)
        {
            temp=i;
            while(diff[i]==diff[i+1]){
                a++;
                i++;
            }
            i=temp;
        }
        return a;
    }
};
int main(){
    Solution s1;
    vector<int> a{1,2,3,4};
    cout<<s1.numberOfArithmeticSlices(a);
    return 0;
}