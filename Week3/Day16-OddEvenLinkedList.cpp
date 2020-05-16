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
    ListNode* oddEvenList(ListNode* head) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        if(head==NULL)
            return head;
        
        ListNode* first=head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=NULL)
        {
            prev=curr->next;
            curr=curr->next->next;
            
            //remove the node
            if(curr!=NULL)
                prev->next=curr->next;
            else
                break;
            
            //insert the node
            curr->next=first->next;
            first->next=curr;
            
            //increment the pointers
            curr=prev;
            first=first->next;
        }
        return head;
    }
};
