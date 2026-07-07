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
    bool isPalindrome(ListNode* head) {
        // vector<int>ans;
        // while(head!=nullptr){
        //     ans.push_back(head->val);
        //     head= head->next;
        // }
        // int left = 0;
        // int right = ans.size()-1;
        // while(left<right){
        //     if(ans[left]!=ans[right]){
        //         return false;
        //     }
        //         left++;
        //         right--;
        // }
        // return true;

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
       
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while(curr!=nullptr){
            ListNode* temp = curr->next;
            curr->next=prev;
            prev = curr;
            curr = temp;
        }
        ListNode* l1 = head;
        ListNode* l2 = prev;
        while(l2!=nullptr){
            if(l1->val != l2->val){
                return false;
            }
            l1=l1->next;
            l2=l2->next;
        }
        return true;
    }
};