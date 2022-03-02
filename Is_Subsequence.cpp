#include <iostream>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool answer=false;
        int i=0,j=0;
        while(i!=t.size() && j!=s.size()){
            if(s[j]==t[i]){
                // answer=true;
                j++;
                }
            i++;
        }
        if(j==s.size()) answer = true;
        return answer;
    }
};
int main(){
    Solution s;
    cout<<s.isSubsequence("abc","ahbgdc");
    return 0;
}