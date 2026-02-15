#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;       // move 1 step
            fast = fast->next->next; // move 2 steps
        }

        return slow;
    }
};

int main()
{

    int n;
    cin >> n;

    ListNode *head = NULL;
    ListNode *tail = NULL;

    // Input linked list
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ListNode *newNode = new ListNode(x);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Solution sol;
    ListNode *mid = sol.middleNode(head);

    cout << "Middle Node Value: " << mid->val << endl;

    return 0;
}
