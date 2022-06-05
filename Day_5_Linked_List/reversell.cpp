// https://takeuforward.org/data-structure/reverse-a-linked-list/
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    // Write your code here
    LinkedListNode<int> *prev = NULL, *curr = head;
    while (curr)
    {
        LinkedListNode<int> *t = curr->next;
        curr->next = prev;
        prev = curr;
        curr = t;
    }
    return prev;
}

//  using recurrsion
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    // Write your code here
    if (!head || !head->next)
        return head;
    LinkedListNode<int> *nn = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    return nn;
}