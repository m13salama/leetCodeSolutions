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
const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        return reverse(head, NULL);
    }
    
    public:
    ListNode* reverse(ListNode* head, ListNode* newHead)
    {
        if(head == NULL)
        {
            return newHead;
        }
        ListNode* next = head->next;
        head->next = newHead;
        return reverse(next, head);
    }
    
};