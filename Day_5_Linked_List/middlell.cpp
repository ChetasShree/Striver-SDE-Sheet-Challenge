// https://takeuforward.org/data-structure/find-middle-element-in-a-linked-list/

Node *findMiddle(Node *head)
{
    // Write your code here
    Node *slow = head;
    Node *fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast)
        return slow->next;
    return slow;
}