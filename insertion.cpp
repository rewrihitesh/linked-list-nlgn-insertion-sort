/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 ListNode* rev(ListNode* h){
     ListNode* x=NULL;
     while(h){
         ListNode* t=h->next;
         h->next=x;
         x=h;
         h=t;
     }
     return x;
 }
 
ListNode* Solution::insertionSortList(ListNode* a) {
    ListNode *h=a;
    a=a->next;
    h->next=NULL;
    while(a){
        // case 1 if we hv to appen at begi 
        if(a->val>=h->val){
            ListNode* t=a->next;
            a->next=h;
            h=a;
            a=t;
        }else{
            // case 2 if we hv to swap
            ListNode* y=h,*z=NULL;
            while(y and a->val<y->val){
                z=y;
                y=y->next;
            }
            ListNode* t=a->next;
            z->next=a;
            a->next=y;
            a=t;
        }
    }
    // rev list;
    a=rev(h);
    return a;
}
int main(){
  
  // cal the above function
  
  return 0;
}
