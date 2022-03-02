#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
// class Solution {
// public:
//     vector<int> countBits(int n) {
//         vector<int> a;
//         int range=log2(n);
//         int k=2;
//         a.push_back(0);
//         a.push_back(1);
//         for (int i = 1; i <= range; i++)
//         {
//             for (int j = 0; j < pow(2,i); j++)
//             {
//                 a.push_back(a[j]+1);
//                 if(k==n)  break;
//                 k++;
//             }
            
//         }
//         return a;
        
//     }
// };

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
		
		// iterating fromt 0 to n
        for(int i = 0; i<=n; i++)
        {
			// sum is initialised as 0
            int sum = 0;
            int num = i;
			// while num not equals zero
            while(num != 0)
            {
				// we have to count 1's in binary representation of i, therefore % 2
                sum += num%2;
                num = num/2;
            }
			// add sum to ans vector
            ans.push_back(sum);
        }
		// return 
        return ans;
    }
};
int main(){
    Solution s1;
    vector<int> a=s1.countBits(5);

    return 0;
}