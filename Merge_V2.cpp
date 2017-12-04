class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode *p1,*pHead_head,*p2;
        bool tmp = false;
         if(pHead1 && pHead2){
            if(pHead1->val < pHead2->val){
                pHead_head = pHead1;
                p2 = pHead2;
                p1 = pHead1->next;
                tmp = false;
            }
            else{
                pHead_head = pHead2;
                p1 = pHead1;
                p2 = pHead2->next;
                tmp = true;
            }
       		while(p1 && p2){
                if(p1->val < p2->val){
                    	if(!tmp){
                            p1 = p1->next;
                        }
                    	else{
                            pHead2->next = p1;
                            p1 = p1->next;
                            pHead2 = p2;
                        }
                    	tmp = false;
                    }
                else{
                    	if(!tmp){
                            pHead1->next = p2;
                            p2 = p2->next;
                            pHead1 = p1;
                        }
                    	else{
                            p2 = p2->next;

                        }
                    	tmp = true;
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
        if(p1 && !p2)
            pHead2->next = p1;
        else
            pHead1->next = p2;
            
           
        
        return pHead_head;

    }
};
