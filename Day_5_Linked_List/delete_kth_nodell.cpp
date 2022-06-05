// https://takeuforward.org/data-structure/remove-n-th-node-from-the-end-of-a-linked-list/
LinkedListNode<int> *removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    LinkedListNode<int> *h = new LinkedListNode<int>(1);
    h->next = head;
    LinkedListNode<int> *slow = h, *fast = h;
    if (!head || K == 0)
        return head;
    for (int i = 1; i <= K; i++)
    {
        fast = fast->next;
    }
    while (fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return h->next;
}