// https://takeuforward.org/data-structure/merge-two-sorted-linked-lists/
Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    // Write your code here.
    if (!first)
        return second;
    if (!second)
        return first;
    Node<int> *phead = NULL;
    if (first->data > second->data)
    {
        phead = second;
        second = second->next;
    }
    else
    {
        phead = first;
        first = first->next;
    }
    Node<int> *p = phead;
    while (first && second)
    {
        if (first->data > second->data)
        {
            phead->next = second;
            second = second->next;
        }
        else
        {
            phead->next = first;
            first = first->next;
        }
        phead = phead->next;
    }
    if (first)
        phead->next = first;
    if (second)
        phead->next = second;
    return p;
}
