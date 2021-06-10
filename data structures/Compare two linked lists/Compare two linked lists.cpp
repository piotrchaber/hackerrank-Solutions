// github.com/piotrchaber

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if (!head1 && !head2) return true;
    if (!head1 || !head2) return false;
    return head1->data == head2->data && compare_lists(head1->next, head2->next);
}

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if (head1->data != head2->data) return false;
    if (!head1->next && !head2->next) return true;
    if (!head1->next || !head2->next) return false;
    return compare_lists(head1->next, head2->next);
}