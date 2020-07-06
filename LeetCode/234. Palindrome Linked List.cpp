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
    bool isPalindrome(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        if (head == NULL || head->next == NULL)
            return true;

        while (fast->next != NULL && fast->next->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        slow->next = reverseLinkedList(slow->next);
        slow = slow->next;

        fast = head;
        while (slow != NULL)
        {
            if (slow->val != fast->val)
            {
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
    ListNode *reverseLinkedList(ListNode *head)
    {
        ListNode *prev = NULL, *next = NULL;

        while (head != NULL)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};