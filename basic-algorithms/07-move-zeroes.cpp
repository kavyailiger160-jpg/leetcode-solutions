#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    int position = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < nums.size())
    {
        nums[position] = 0;
        position++;
    }
}

void printArray(vector<int>& nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Test Case 1
    vector<int> nums1 = {0, 1, 0, 3, 12};

    cout << "Test Case 1:" << endl;
    cout << "Before: ";
    printArray(nums1);

    moveZeroes(nums1);

    cout << "After:  ";
    printArray(nums1);

    // Test Case 2
    vector<int> nums2 = {0, 0, 1};

    cout << "\nTest Case 2:" << endl;
    cout << "Before: ";
    printArray(nums2);

    moveZeroes(nums2);

    cout << "After:  ";
    printArray(nums2);

    return 0;
}