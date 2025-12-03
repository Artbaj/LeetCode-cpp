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
    int carry;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode;
        ListNode* dummy2 = new ListNode;
        dummy->next = dummy2;
        
    
            int carry =0;
        while(l1!=nullptr||l2!=nullptr||carry!=0){
            int sum =0;
            if(l2!=nullptr){
                sum+=l2->val;
                if(l2->next!=nullptr) {
                    l2 = l2->next;
                }
                else{
                    l2=nullptr;
                }
                }
            
           
             if(l1!=nullptr){
                sum+=l1->val;
                if(l1->next!=nullptr) {
                        l1 = l1->next;
                }
                else{
                    l1=nullptr;
                }
            }
           
            
            sum+=carry;
            dummy2->val = sum%10;
            carry = sum/10;
            if(l1!=nullptr||l2!=nullptr||carry!=0) {
                dummy2->next = new ListNode;
                dummy2 = dummy2->next;
            } 
        }
        return dummy->next;
    }
};