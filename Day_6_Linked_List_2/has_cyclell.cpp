// https://takeuforward.org/data-structure/detect-a-cycle-in-a-linked-list/
bool detectCycle(Node *head)
{
    //	Write your code here
    if (!head || !head->next)
        return false;
    unordered_map<Node *, bool> mp;
    while (true)
    {
        if (head->next == NULL)
            return false;
        else
        {
            if (mp[head] == true)
                return true;
            else
            {
                mp[head] = true;
                head = head->next;
            }
        }
    }
    return false;
}

// method 2
bool detectCycle(Node *head)
{
    //	Write your code here
    if (!head || !head->next)
        return false;
    Node *slow = head, *fast = head->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
            return true;
    }
    return false;
}

// method 3
bool detectCycle(Node *head)
{
    //	Write your code here
    unordered_set<Node *> s;
    while (head)
    {
        if (s.find(head) != s.end())
            return true;
        s.insert(head);
        head = head->next;
    }
    return false;
}