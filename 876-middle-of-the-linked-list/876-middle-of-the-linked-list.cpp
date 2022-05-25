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
    ListNode* middleNode(ListNode* head) {
        cin.tie(0);
        cout.tie(0);
        cin.sync_with_stdio(0);
        cout.sync_with_stdio(0);
        ListNode *p_midle = head;
        ListNode *p_end = head;

        while(p_end->next != nullptr && p_end->next->next != nullptr){
            p_end = p_end->next->next;
            p_midle = p_midle->next;
        }
        if(p_end->next == nullptr)
            return p_midle;
        else
            return p_midle->next;

    }

};