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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        int val1=0;
        int val2=0;
        int gcd=0;
        ListNode * ans=head;
        while(head->next!=nullptr){
           val1=head->val;
           val2=head->next->val;
           for(int i=1;i<=val2;i++){
           if(val1%i==0&&val2%i==0)
                  gcd=i;
           }
           head->next=new ListNode(gcd,head->next);
           head=head->next->next;
        }
        return ans;
    }
};