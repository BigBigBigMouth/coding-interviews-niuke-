class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode *pHead,*pHead_head,*q;
        if(pHead1 && pHead2){
            if(pHead1->val < pHead2->val){
                pHead = new ListNode(pHead1->val);
                pHead_head = pHead;
                pHead1 = pHead1->next;
            }
            else{
                pHead = new ListNode(pHead2->val);
                pHead_head = pHead;
                pHead2 = pHead2->next;
            }
       		while(pHead1 && pHead2){
                if(pHead2->val < pHead1->val){
                    q = new ListNode(pHead2->val);
                    pHead2 = pHead2->next;
                    pHead->next = q;
                    pHead = pHead->next;
            	}
                else{
                    q = new ListNode(pHead1->val);
                    pHead1 = pHead1->next;
                    pHead->next = q;
                    pHead = pHead->next;
                }
            }
        }
        else{
            if(!pHead1 && pHead2)
                return pHead2;
            else if(pHead1 && !pHead2)
                return pHead1;
            else 
                return NULL;
            
        }
            if(!pHead1 && pHead2)
                while(pHead2){
                    q = new ListNode(pHead2->val);
                    pHead2 = pHead2->next;
                    pHead->next = q;
                    pHead = pHead->next;
                }
            else if(pHead1 && !pHead2)
                while(pHead1){
                    q = new ListNode(pHead1->val);
                    pHead1 = pHead1->next;
                    pHead->next = q;
                    pHead = pHead->next;
                }
            else
                return pHead_head;
        
        return pHead_head;

    }
};
