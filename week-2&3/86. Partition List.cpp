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
    ListNode* partition(ListNode* head, int x) {
        ListNode* before = new ListNode(0);
        ListNode* after = new ListNode(0);

        ListNode* curr_b = before;
        ListNode* curr_a = after;

        while (head) {
            ListNode* next = head->next;
            head->next = nullptr; // tách node khỏi list cũ

            if (head->val < x) {
                curr_b->next = head;
                curr_b = head;
            } else {
                curr_a->next = head;
                curr_a = head;
            }

            head = next;
        }

        curr_b->next = after->next;

        return before->next;
    }
};