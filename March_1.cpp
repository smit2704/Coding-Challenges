#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> a;
        int range=log2(n);
        int k=2;
        a.push_back(0);
        a.push_back(1);
        for (int i = 1; i <= range; i++)
        {
            for (int j = 0; j < pow(2,i); j++)
            {
                a.push_back(a[j]+1);
                if(k==n)  break;
                k++;
            }
            
        }
        return a;
        
    }
};
int main(){
    Solution s1;
    vector<int> a=s1.countBits(5);

    return 0;
}