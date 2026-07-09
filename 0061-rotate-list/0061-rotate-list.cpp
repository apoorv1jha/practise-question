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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* curr = head;
        int len =1;
        while(curr->next!=nullptr){
            curr= curr->next;
            len++;
        }
        curr->next=head;
         k = k%len;
        if(k==0){
        curr->next=nullptr; return head;
    }
       
         int jump = len-k-1;
         curr=head;
         while(jump){
            curr=curr->next;
            jump--;
         }
         ListNode* newnode = curr->next;
         curr->next=nullptr;
         return newnode;
    }
};