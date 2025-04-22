class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
         if (head == NULL) return head;
        
        ListNode* evenHead = head->next; 
        ListNode* oddWalker = head;
        ListNode* evenWalker = evenHead;
        
        while(evenWalker != NULL && evenWalker->next != NULL) {
            oddWalker->next = oddWalker->next->next;
            evenWalker->next = evenWalker->next->next;
            oddWalker = oddWalker->next;
            evenWalker = evenWalker->next;
        }
        
        oddWalker->next = evenHead;
        
        return head;
    }
};
