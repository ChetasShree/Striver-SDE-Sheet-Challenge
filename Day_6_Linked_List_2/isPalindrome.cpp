LinkedListNode<int> *doreverse(LinkedListNode<int> *head)
{
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
bool isPalindrome(LinkedListNode<int> *head)
{
    // Write your code here.
    if (head == NULL || head->next == NULL)
        return true;
    LinkedListNode<int> *slow = head, *fast = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = doreverse(slow->next);
    slow = slow->next;
    LinkedListNode<int> *d = head;

    while (slow)
    {
        if (slow->data != d->data)
            return false;
        slow = slow->next;
        d = d->next;
    }
    return true;
}