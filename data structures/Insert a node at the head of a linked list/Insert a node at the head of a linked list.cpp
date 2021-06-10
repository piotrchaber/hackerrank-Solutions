// github.com/piotrchaber

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* nhead = new SinglyLinkedListNode{data};
    nhead->next = head;
    return nhead;
}