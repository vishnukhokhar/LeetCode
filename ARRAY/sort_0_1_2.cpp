class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high)
        {
            switch (nums[mid])
            {
                // when mid points to 0
            case 0:
                swap(nums[low++], nums[mid++]);
                break;

                // when mid points to 1
            case 1:
                mid++;
                break;

                // when mid points to 2
            case 2:
                swap(nums[mid], nums[high--]);
            }
        }
    }
};