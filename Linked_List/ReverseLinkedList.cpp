class Solution {
public:
    ListNode* reverseList(ListNode* head) { // O(n) space
        if(head == NULL or head->next == NULL) return head;
        ListNode* a = head->next;
        ListNode* newHead = reverseList(a);
        a->next = head;
        head->next = NULL;
        return newHead;
    }
    // ListNode* reverseList(ListNode* head) { // O(1) space
    //     ListNode* curr = head;
    //     ListNode* prev = NULL;
    //     while(curr != NULL){
    //         ListNode* fwd = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = fwd;
    //     }
    //     return prev;
    // }
};
