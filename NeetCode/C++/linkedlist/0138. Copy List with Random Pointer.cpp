/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        unordered_map<Node *, Node *> hash;
        Node *h = head;
        while (h)
        {
            hash[h] = new Node(h->val);
            h = h->next;
        }
        h = head;
        while (h)
        {
            Node *NewNode = hash[h];
            NewNode->next = hash[h->next];
            NewNode->random = hash[h->random];
            h = h->next;
        }
        return hash[head];
    }
};