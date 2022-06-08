Node *firstNode(Node *head)
{
    //    Write your code here.
    if (!head || !head->next)
        return false;
    Node *slow = head, *fast = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
            break;
    }
    if (!fast || !fast->next)
        return NULL;
    Node *p = head, *q = slow;
    while (p != q)
    {
        p = p->next;
        q = q->next;
    }
    return p;
}