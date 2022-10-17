 #include <iostream>
 
 using namespace std;

//singly linked list 
 struct ListNode 
{
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        ListNode* curr = head;
        ListNode* last = nullptr;
        int size = 0;
        
        // find the size of the linked list and the last element
        while(curr->next != nullptr)
        {
             cout << curr->val << endl;
             curr = curr->next;
             size++;
        } 
        last = curr;
        //sanity test finding size 
        cout << size << endl;
        curr = head;
        
        // iterate through linked list 
        for(int i = 0; i < size;)
        {
            // if the haed is not equal to the tail
            // the list is not a palindrome
            if(curr->val != last->val){
               return false; 
               break;
            }
            // iterate to the second to last element in the list
            last = head;
            i++;
            for(int z = 0; z < (size - i); z++)
               last= last->next;
            // now we iteratate head 
            curr = curr->next;
        }
        return true;
    }
};

int main (int argc, char *argv[])
{

   ListNode* head = new ListNode(0);
   ListNode* curr = head;
   int z = 1;
   int size = 9;

   for(int i = 1; i != 0;){
      ListNode* node = new ListNode(z);
      if( i )
         z--;
      else
         z++;
      curr->next = node;
      curr = curr->next;
   }
      
      Solution solve = Solution();
      
      if( solve.isPalindrome(head) == false)
         cout << "Is not a Palindrome" << endl;
      else
         cout << "This is a Palindrome" << endl;
}