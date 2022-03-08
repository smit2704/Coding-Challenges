#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
void arrtolist(struct ListNode *l,int *arr){
    int size=sizeof(arr)/sizeof(arr[0]);
    ListNode *ptr=l;
    for (int i = 0; i < size; i++)
    {
        ptr->val=arr[0];
        ptr=ptr->next;    
    }
    ptr=NULL;
}
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3=(ListNode*)malloc(sizeof(ListNode));
        ListNode *ptr=l3;
        int temp=0,carry=0;
        while (l1!=NULL || l2!=NULL)
        {
            temp=l1->val+l2->val+carry;
            if(temp>10){
                carry=1;
                temp/=10;
            }
            ptr->val=temp;
            ptr=ptr->next;
        }
        return l3;
    }
    
};
void traversal(ListNode *l){
    if(l==NULL) return;
    ListNode *ptr=l;
    cout<<ptr->val<<" ";
    traversal(l->next); 
}
int main(){
    Solution s1;
    int arr1[]={2,4,3},arr2[]={5,6,4};
        ListNode *l1=(ListNode*)malloc(sizeof(ListNode));
        ListNode *l2=(ListNode*)malloc(sizeof(ListNode));
        arrtolist(l1,arr1);
        arrtolist(l2 ,arr2);
    traversal(s1.addTwoNumbers(l1,l2));
    return 0;
}