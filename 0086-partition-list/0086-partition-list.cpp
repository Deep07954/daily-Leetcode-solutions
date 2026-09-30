/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int>order;
        while(head){
            order.push_back(head->val);
            head=head->next;
        }
       
        vector<int>ans;
        for(int i=0;i<order.size();i++){
            if(order[i]<x){
                ans.push_back(order[i]);
            }
        }
        for(int i=0;i<order.size();i++){
            if(order[i]>=x){
                ans.push_back(order[i]);
            }
        }
        ListNode* head2=new ListNode(0);
        
        ListNode* curr=head2;
        for(auto val:ans){
            curr->next=new ListNode(val);
            curr=curr->next;
        }
      return head2->next;
    }
};