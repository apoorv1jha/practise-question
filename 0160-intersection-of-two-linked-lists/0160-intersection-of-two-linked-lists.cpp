/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // // take a nodelist traverse it 
        // while(headB!=nullptr){
        //     // take a temp variable store heada
        //     ListNode* temp = headA;
        //     // run a loop till heada
        //    while(temp!=nullptr){
        //     // if heada==headb equal,we gotthe intersection point ansd return the node
        //     if(temp==headB){
        //         return headB;
        //     }
        //     // traverse it tille nd of heada ka end tkk
        //    temp=temp->next;
        //    }
        //    // traverse it till the head b ka end tkk
        //    headB=headB->next;
        // }
        // //kuch nhi mila toh return null kr do
        // return nullptr;

        ListNode* d1 = headA;
        ListNode* d2 = headB;
        while(d1!=d2){
            d1=d1==nullptr ? headB : d1->next;
            d2=d2==nullptr ? headA : d2->next;
        }
        return d1;
    }
};