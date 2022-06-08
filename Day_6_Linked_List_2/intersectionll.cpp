// https://takeuforward.org/data-structure/find-intersection-of-two-linked-lists/

// method 1 - tle
int findIntersection(Node *firstHead, Node *secondHead)
{
    // Write your code here
    Node *a = firstHead, *b = secondHead;
    while (a != b)
    {
        if (a == NULL)
            a = secondHead;
        else
            a = a->next;
        if (b == NULL)
            b = firstHead;
        else
            b = b->next;
    }
    return a->data;
}

// method 2 - tle
int findIntersection(Node *firstHead, Node *secondHead)
{
    // Write your code here
    while (firstHead)
    {
        Node *t = secondHead;
        while (firstHead && t && firstHead != t)
        {
            t = t->next;
        }
        if (firstHead == t)
            return firstHead->data;
        else
            firstHead = firstHead->next;
    }
    return -1;
}

// method 3 - abit optimized
int findIntersection(Node *firstHead, Node *secondHead)
{
    // Write your code here
    set<Node *> s;
    Node *t = firstHead;
    while (t)
    {
        s.insert(t);
        t = t->next;
    }
    Node *t2 = secondHead;
    while (t2)
    {
        if (s.find(t2) != s.end())
            return t2->data;
        else
            t2 = t2->next;
    }
    return -1;
}

// method 4
int len(Node *head)
{
    if (!head)
        return 0;
    return 1 + len(head->next);
}
int findIntersection(Node *firstHead, Node *secondHead)
{
    // Write your code here
    int s1 = len(firstHead);
    int s2 = len(secondHead);
    if (s1 > s2)
    {
        int d = s1 - s2;
        while (d--)
            firstHead = firstHead->next;
    }
    else
    {
        int d = s2 - s1;
        while (d--)
            secondHead = secondHead->next;
    }
    while (firstHead && secondHead)
    {
        if (firstHead == secondHead)
            return firstHead->data;
        else
        {
            firstHead = firstHead->next;
            secondHead = secondHead->next;
        }
    }
    return -1;
}