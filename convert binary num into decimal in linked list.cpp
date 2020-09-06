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
    int f(string s)
    {
        int ans=0;
        int base=1;
        int n=(int)s.length();
        for(int i=n-1;i>=0;i--)
        {
           if(s[i]=='1')
               ans=ans+base;
            base=base*2;
        }
        return ans;
    }
    int getDecimalValue(ListNode* head) {
        string s;
        while(head!=NULL)
        {
           int data=head->val;
           
            if(data==1)
              s=s+'1';
            else
                s=s+'0';
         
         head=head->next;
        }
        int ans=f(s);
        return ans;
        
    }
};