// github.com/piotrchaber

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    if(head == nullptr) {
        DoublyLinkedListNode* insertedNode = new DoublyLinkedListNode{data};
        return insertedNode;
    }
    if(data < head->data) {
        DoublyLinkedListNode* insertedNode = new DoublyLinkedListNode{data};
        insertedNode->next = head;
        head->prev = insertedNode;
        return insertedNode;
    }
    DoublyLinkedListNode* restNode = sortedInsert(head->next, data);
    restNode->prev = head;
    head->next = restNode;
    return head;
}

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* insertNode = new DoublyLinkedListNode{ data };
    insertNode->next = head;
    head->prev = insertNode;
    while(head && head->data < data) {
        std::swap((head->prev)->data, head->data);
        head = head->next;
    }
    return insertNode;
}