#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// class Solution
// {
// public:
//     ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
//     {
        // ListNode *head = new ListNode(0);
//         ListNode *l = head;
//         if (list1 == NULL)
//         {
//             return list2;
//         }
//         else if (list2 == NULL)
//         {
//             return list1;
//         }
//         else
//         {
//             if (list1->val < list2->val)
//             {
//                 list1->next=mergeTwoLists(list1->next,list2);
//                 return list1;
//             }
//             else{
//                 list2->next=mergeTwoLists(list1,list2->next);
//                 return list2;
//             }
//         }
//         // return head;
//     }
// };

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
       ListNode *head=new ListNode(0);
       ListNode *temp=head;
       ListNode *l1=list1;
       ListNode *l2=list2;
       while(l1 && l2){
           if(l1->val<l2->val){
               temp->next=l1;
               l1=l1->next;
           }
           else{
               temp->next=l2;
               l2=l2->next;
           }
           temp=temp->next;
       }
       if(l1)   temp->next=l1;
       else   temp->next=l2;
       return head->next;
    }
};
int main()
{

    return 0;
}



// class Solution
// {
// public:
//     ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
//     {
//         ListNode *ptr1 = list1;
//         ListNode *ptr2 = list2;
//         ListNode *head = (ListNode *)malloc(sizeof(ListNode));
//         if (ptr1 == NULL && ptr2 == NULL)
//         {
//             return head;
//         }
//         if (ptr1 != NULL && ptr2 != NULL)
//         {
//             if (ptr1->val < ptr2->val)
//             {
//                 head = ptr1;
//                 ptr1 = ptr1->next;
//             }
//             else
//             {
//                 head = ptr2;
//                 ptr2 = ptr2->next;
//             }
//         }
//         else{
//             if(ptr1==NULL){
//                 head=ptr2;
//             }
//             else{
//                 head=ptr1;
//             }
//         }
//         ListNode *l = head;
//         while (ptr1 != NULL || ptr2 != NULL)
//         {
//             if (ptr1 != NULL && ptr2 != NULL)
//             {
//                 if (ptr1->val < ptr2->val)
//                 {
//                     l->next = ptr1;
//                     ptr1 = ptr1->next;
//                 }
//                 else
//                 {
//                     l->next = ptr2;
//                     ptr2 = ptr2->next;
//                 }
//             }
//             else if (ptr1 == NULL)
//             {
//                 l->next = ptr2;
//                 ptr2 = ptr2->next;
//             }
//             else
//             {
//                 l->next = ptr1;
//                 ptr1 = ptr1->next;
//             }
//             l = l->next;
//         }
//         l->next = NULL;
//         return head;
//     }
// };
