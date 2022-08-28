#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        init;
        map<ListNode*,int> momo;
        ListNode *p = head;
        ListNode *p_end = head;
        int i=1;
        while(p != nullptr){
            if(momo[p] == 0) {
                momo[p] = i;
                p=p->next;
                i++;
            }
            else {
                return p;
            }
        }
        return nullptr;

    }

};