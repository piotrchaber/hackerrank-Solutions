// github.com/piotrchaber

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* mergedLL = new SinglyLinkedListNode{0};
    if(head1 == nullptr) return head2;
    if(head2 == nullptr) return head1;
    if(head1->data > head2->data) {
        mergedLL = head2; mergedLL->next = mergeLists(head1, head2->next);
    }
    else {
        mergedLL = head1; mergedLL->next = mergeLists(head1->next, head2);
    }
    return mergedLL;
}