// https://takeuforward.org/data-structure/delete-given-node-in-a-linked-list-o1-approach/
void deleteNode(LinkedListNode<int> *node)
{
    // Write your code here.
    node->data = node->next->data;
    node->next = node->next->next;
}