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

        ListNode* dummy = new ListNode(0); // ek dummy node banaenge
        dummy->next = head; // dummy node ko head bna denge

        ListNode* fast = dummy; // fast pointer dummy head pe
        ListNode* slow = dummy; // slow pointer bhi dummy head pe

        // fast ko n steps aage le jao
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Dono ko saath move karo
        while (fast->next != NULL) {
            fast = fast->next; // ab fast last index pe hoga
            slow = slow->next; // or slow jise remove karna h usse 1 pehle
        }

        // nth node ko remove karo
        ListNode* temp = slow->next;
        slow->next = slow->next->next; // ab slow wale se hum uske next ka next node connect karenge
        delete temp;// isko delete kar denge

        return dummy->next;
    }
};