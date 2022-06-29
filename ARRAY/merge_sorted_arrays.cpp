#include <bits/stdc++.h>
using namespace std;

void merge(int nums1[], int nums2[], int m, int n)
{
    int gap = ceil((float)(m + n) / 2);
    while (gap > 0)
    {
        int i = 0;
        int j = gap;
        while (j < (m + n))
        {
            if (j < m && nums1[i] > nums1[j])
            {
                swap(nums1[i], nums1[j]);
            }
            else if (j >= m && i < m && nums1[i] > nums2[j - m])
            {
                swap(nums1[i], nums2[j - m]);
            }
            else if (j >= m && i >= m && nums2[i - m] > nums2[j - m])
            {
                swap(nums2[i - m], nums2[j - m]);
            }
            i++;
            j++;
        }
        if (gap == 1)
        {
            gap = 0;
        }
        else
        {
            gap = ceil((float)gap / 2);
        }
    }
}

int main()
{
    int arr1[] = {1, 4, 7, 8, 10};
    int arr2[] = {2, 3, 9};
    cout << "Before merge:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    merge(arr1, arr2, 5, 3);
    cout << "After merge:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << " ";
    }
}