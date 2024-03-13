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
    ListNode *gettemp(ListNode *head,int i){
        //0-3
        ListNode *&curr=head;
        int temp=1;
        while(temp!=i){
            curr=curr->next;
            temp++;
        }

        return curr;
    }
    ListNode* rotateRight(ListNode* &head, int k) {

        if(k==0 || head==NULL)
            return head;

        int len=1;
        ListNode *tail=head;

        while(tail->next!=NULL){
            tail=tail->next;
            len++;
        }
        

        if(k%len==0)
            return head;

        k=k%len;    


        tail->next=head;
        ListNode *temp=gettemp(head,len-k);
        head=temp->next;
        temp->next=nullptr;
        return head;

    }
};