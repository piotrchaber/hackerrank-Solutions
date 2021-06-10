// github.com/piotrchaber

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* tail = new SinglyLinkedListNode{data};
    tail->next = nullptr;
    if(head == nullptr) return tail;
    while(head->next) { head = head->next; }
    head->next = tail;
    return temp;
}