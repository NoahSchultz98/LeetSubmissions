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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* middle = head;
        int i = 0;
        
        while(temp != nullptr){
            temp = temp->next;
            i++;
            if(i % 2 == 0){
                middle = middle->next;
                i = 0;    
            }
            //i++;
        }
        
        return middle;
    }
};
