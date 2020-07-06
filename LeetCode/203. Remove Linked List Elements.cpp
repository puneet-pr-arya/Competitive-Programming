/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *currentNode;
        currentNode = head;

        while (head != NULL && head->val == val)
        {
            head = head->next;
        }
        while (currentNode != NULL && currentNode->next != NULL)
        {
            if (currentNode->next->val == val)
            {
                currentNode->next = currentNode->next->next;
            }
            else
            {
                currentNode = currentNode->next;
            }
        }
        return head;
    };
};