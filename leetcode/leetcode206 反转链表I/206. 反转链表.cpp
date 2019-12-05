206. 反转链表
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode *prePtr = NULL;
        ListNode* curPtr = head;
        ListNode* nextPtr=head->next;
        while(nextPtr != NULL){
            curPtr->next = prePtr;
            prePtr = curPtr;
            
            
            curPtr = nextPtr;
            nextPtr = nextPtr->next;
        }

        curPtr->next=prePtr;
       
        return curPtr;  
    }
};
