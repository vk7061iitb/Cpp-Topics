#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        // vector to store critical node's index
        vector<int> criticalIndices;
        vector<int> ans(2);

        // If node has 2 or 3 elments then return [-1, -1]
        if (!head->next->next || !head->next->next->next)
        {
            ans = {-1, -1};
            return ans;
        }

        // If it has > 3 elements
        ListNode *currPtr = head;
        ListNode *prevPtr = head;
        ListNode *nextPtr = head;
        int currIndex = 1;
        while (nextPtr->next)
        {
            prevPtr = currPtr;
            currPtr = currPtr->next;
            nextPtr = currPtr->next;
            currIndex++;

            // find local max, min
            bool isLocalmax = (currPtr->val > prevPtr->val) && (currPtr->val > nextPtr->val);
            bool isLocalmin = (currPtr->val < prevPtr->val) && (currPtr->val < nextPtr->val);
            if (isLocalmax || isLocalmin)
            {
                criticalIndices.push_back(currIndex);
            }
        }
        // find min and max distance
        int n = criticalIndices.size();
        int maxDist = criticalIndices[n - 1] - criticalIndices[0];
        int minDist = maxDist;
        for (int i = 1; i < n; i++)
        {
            if (minDist > (criticalIndices[i] - criticalIndices[i - 1]))
            {
                minDist = (criticalIndices[i] - criticalIndices[i - 1]);
            }
        }
        ans = {minDist, maxDist};
        return ans;
    }
};