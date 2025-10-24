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

    ListNode*  gen_list(ListNode* l1, ListNode* l2,int b){

        if(l1 == nullptr && l2 == nullptr && b == 0){
            return nullptr;
        }
        else{
            int s = 0;
            if(l1 != nullptr){
                s += l1->val;
            }
            if(l2 != nullptr){
                s += l2->val;
            }
            s+=b;
            ListNode*  n1 = (l1== nullptr) ? nullptr : l1->next;
            ListNode*  n2 = (l2== nullptr) ? nullptr : l2->next;
            return new ListNode(s%10,gen_list(n1,n2,s/10));
        }

    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = gen_list(l1,l2,0);
        return res;
    }
};