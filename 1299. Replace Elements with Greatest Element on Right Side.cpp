class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int largestEle = 0;
        int swapVariable = 0;
        largestEle = arr[arr.size() - 1];
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            if (i == arr.size() - 1)
            {
                arr[i] = -1;
            }
            else
            {
                if (largestEle >= arr[i])
                {
                    arr[i] = largestEle;
                }
                else
                {
                    swapVariable = largestEle;
                    largestEle = arr[i];
                    arr[i] = swapVariable;
                }
            }
        }
        return arr;
    }
};