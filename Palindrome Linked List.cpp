class Solution {
  public:
    bool isPalindrome(Node *head) {
        if(!head) return true;
        Node* temp = head;
        stack<int> st;
        while(temp){
            st.push(temp->data);
            temp = temp->next;
        }
        temp = head;
        while(temp){
            if(temp->data != st.top()){
                return false;
            }
            temp = temp->next;
            st.pop();
        }
        return true;
    }
};
