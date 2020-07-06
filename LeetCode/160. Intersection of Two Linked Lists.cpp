/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {

        ListNode *A = headA;
        ListNode *B = headB;
        if (A == NULL || B++ == NULL)
            return NULL;

        while (A != B)
        {
            if (A == NULL)
            {
                A = headB;
            }
            else
            {
                A = A->next;
            }
            if (B == NULL)
            {
                B = headA;
            }
            else
            {
                B = B->next;
            }
        }
        return A;
    }
};

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution
// {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
//     {

//         while (headA != NULL)
//         {
//             headA->val = -(headA->val);
//             headA = headA->next;
//         }
//         ListNode *foundValue = NULL;

//         headB = headB->next;

//         int value;

//         while (headB != NULL)
//         {
//             if (headB->val < 0 && headB->next != NULL)
//             {
//                 value = -(headB->val);
//                 foundValue = headB;
//                 foundValue->val = value;
//                 break;
//             }
//             headB = headB->next;
//         }
//         while (headA != NULL)
//         {
//             headA->val = abs(headA->val);
//             headA = headA->next;
//         }

//         if (foundValue == NULL)
//             return NULL;
//         else
//         {
//             return foundValue;
//         }
//     }
// };