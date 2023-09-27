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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p1=head;
        ListNode *p2=head;
        ListNode *p3=head;

        while(p3!=NULL){
            if(k>1){
                p1=p1->next;
                
            }
            if(k<=0){
                p2=p2->next;
            }
            p3=p3->next;
            k--;
            

        }

        swap(p1->val,p2->val);
        return head;
    }
};