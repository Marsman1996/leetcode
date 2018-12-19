#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = NULL, *temp = NULL;
        int is_first = 0, is_next = 0;
        int v1, v2, r, cb = 0;
        while(l1 != NULL || l2 != NULL){
            is_next = 0;
            v1 = (l1 == NULL) ? 0 : l1->val;
            v2 = (l2 == NULL) ? 0 : l2->val;
            r  = v1 + v2 + cb;
            cb = (r >= 10) ? 1 : 0;
            is_next = cb;
            r  = (cb == 1) ? r - 10 : r;
            
            l1 = (l1 == NULL) ? l1 : l1->next;
            l2 = (l2 == NULL) ? l2 : l2->next;
            
            if(is_first == 0){
                res = new ListNode(r);
                temp = res;
                is_first = 1;
                continue;
            }
            temp->next = new ListNode(r);
            temp = temp->next;
        }
        if(is_next){
            temp->next = new ListNode(1);
        }
        return res;
    }
};

int main(void){
    ListNode *l10 = new ListNode(2);
    ListNode *l11 = new ListNode(4);
    l10->next = l11;
    ListNode *l12 = new ListNode(3);
    l11->next = l12;

    ListNode *l20 = new ListNode(5);
    ListNode *l21 = new ListNode(6);
    l20->next = l21;
    ListNode *l22 = new ListNode(5);
    l21->next = l22;

    Solution sol;
    ListNode *res;
    res = sol.addTwoNumbers(l10, l20);
    for(; res->next != NULL; res = res->next)
        cout << res->val << "->";
    cout << endl;
}