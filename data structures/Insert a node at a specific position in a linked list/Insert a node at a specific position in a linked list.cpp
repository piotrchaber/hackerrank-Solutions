// github.com/piotrchaber

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* insider = new SinglyLinkedListNode{data};
    if(position == 0) { insider->next = head; return insider; }
    while(--position) head = head->next;
    insider->next = head->next;
    head->next = insider;
    return temp;
}