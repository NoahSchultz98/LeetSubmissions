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
    
      //int* array;
      //int arr[1]
      int size = 0;
      //int i = 0;
      ListNode* temp = head;

      while(temp!= nullptr){
         size++;
         temp = temp->next;
      }
      
      int array[size];
      temp = head;
      
      for(int i = 0; i < size; i++){
         array[i] = temp->val;
         temp = temp->next;
      }
      
      for(int y = 0; y < (size + 1)/2; y++){
      cout << array[y] << ", " << array[(size-1)-y] << endl;
         if(array[y] != array[(size-1)-y])
            return false;
      }
      return true;
    }

};

int main (int argc, char *argv[])
{

      int array[9] = {0,1,2,3,4,3,2,1,0};
   
   ListNode* head = new ListNode(0);
   
   for(int i = 1; i < 9; i++){
      ListNode* node = new ListNode(array[i], head);
      head = node;  
   }
   
   ListNode* temp = head;
   
   while(temp != nullptr){
   cout << temp->val;
   temp = temp->next;
   }
   cout << endl;
      
      Solution solve = Solution();
      
      if( solve.isPalindrome(head) == false)
         cout << "Is not a Palindrome" << endl;
      else
         cout << "This is a Palindrome" << endl;
}