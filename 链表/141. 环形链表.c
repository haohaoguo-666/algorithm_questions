/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    //快慢指针
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast)return true;
    }
    return false;
}