class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        Node* temp1 = head1;
        Node* temp2 = head2;
        int cnt1=0;
        int cnt2=0;
        while(temp1){
            cnt1++;
            temp1 = temp1->next;
        }
        while(temp2){
            cnt2++;
            temp2 = temp2->next;
        }
        temp1 = head1;
        temp2 = head2;
        while(cnt1>cnt2){
            cnt1--;
            temp1 = temp1->next;
        }
        while(cnt1<cnt2){
            cnt2--;
            temp2 = temp2->next;
        }
        while(temp1!=temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};
