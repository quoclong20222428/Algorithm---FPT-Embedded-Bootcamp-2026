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
        ListNode *i = head, *j = head;

        for (int i = 1; i <= n; i++) {
            j = j->next;
        }

        if(!j) return head->next;

        while (j->next) {
            j = j->next;
            i = i->next;
        }

        i->next = i->next->next;

        return head;
    }
};