// github.com/piotrchaber

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* temp = head;
    if(position == 0) { return head->next; }
    while(--position) { head = head->next; }
    head->next = (head->next)->next;
    return temp;
}