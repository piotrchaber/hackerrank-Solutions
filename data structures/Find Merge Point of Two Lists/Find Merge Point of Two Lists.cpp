// github.com/piotrchaber

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp = head2;
    while(head1 != head2) {
        if(head2->next == nullptr) {
            head1 = head1->next;
            head2 = temp;
        }
        else head2 = head2->next;
    }
    return head1->data;
}