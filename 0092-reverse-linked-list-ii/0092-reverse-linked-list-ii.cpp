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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // while(head==nullptr && head->next==nullptr){
        //     head = head->next;
        // }
        // ListNode* temp = head;
        // for(int i=0;i<left;i++){
        //     temp = temp->next;
        // }
        // for(int i=)
        vector<int>ans;
        ListNode * temp = head;
        while(temp!=nullptr){
            ans.push_back(temp->val);
            temp=temp->next;
        }
       
            reverse(ans.begin()+left-1,ans.begin()+right);
        
        temp = head;
        for(int i=0;i<ans.size();i++){
            temp->val=ans[i];
            temp=temp->next;
        }
        return head;
    }
};