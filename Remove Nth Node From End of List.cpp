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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* temp = head;
    int cnt = 0;

    while (temp) {
        cnt++;
        temp = temp->next;
    }

    if (n > cnt) return head;

    cnt -= n;

    if (cnt == 0) {
        ListNode* newHead = head->next;
        delete head;
        return newHead;
    }

    temp = head;
    while (cnt-- > 1) {
        temp = temp->next;
    }

    if (temp->next) {
        ListNode* nodeToRemove = temp->next;
        temp->next = temp->next->next;
        delete nodeToRemove;
    }

    return head;
    }
};
