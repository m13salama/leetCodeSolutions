const static auto fast = []{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res= new ListNode(-1);
        ListNode* ans= res;
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                ListNode* temp = new ListNode(list1->val);
                ans->next = temp;
                ans = ans->next;
                list1 = list1->next;
            }
            else if(list1->val > list2->val){
                ListNode* temp = new ListNode(list2->val);
                ans->next = temp;
                ans = ans->next;
                list2 = list2->next;
            }
        }
        while(list1 != nullptr){
            ListNode* temp = new ListNode(list1->val);
            ans->next = temp;
            ans = ans->next;
            list1 = list1->next;
        }
        while(list2 != nullptr){
            ListNode* temp = new ListNode(list2->val);
            ans->next = temp;
            ans = ans->next;
            list2 = list2->next;
        }
        return res->next;

    }
};