// https://takeuforward.org/data-structure/add-two-numbers-represented-as-linked-lists/
Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
    Node *t = new Node(1);
    int c = 0;
    Node *d = t;
    while (head1 || head2 || c != 0)
    {
        int s = 0;
        if (head1)
        {
            s += head1->data;
            head1 = head1->next;
        }
        if (head2)
        {
            s += head2->data;
            head2 = head2->next;
        }
        if (c != 0)
            s += c;
        c = s / 10;
        Node *y = new Node(s % 10);
        t->next = y;
        t = t->next;
    }
    return d->next;
}