// github.com/piotrchaber

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    if(head == nullptr || head->next == nullptr) return head;
    SinglyLinkedListNode* newHead = reverse(head->next);
    (head->next)->next = head;
    head->next = nullptr;
    return newHead;
}