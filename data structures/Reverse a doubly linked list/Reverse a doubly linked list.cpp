// github.com/piotrchaber

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* temp;
    while(head != nullptr) {
        temp = head->next;
        head->next = head->prev;
        head->prev = temp;
        if(head->prev == nullptr) break;  
        head = head->prev;
    }
    return head;
}

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* temp = head->next;
    head->next = head->prev;
    head->prev = temp;
    if(head->prev == nullptr) return head;
    return reverse(head->prev);
}