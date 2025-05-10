// A Sample C++ program for beginners with Competitive Programming
#include<iostream>
using namespace std;

// This function returns index of element x in arr[]
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        // Return the index of the element if the element
        // is found
        if (arr[i] == x)
            return i;
    }

    // return -1 if the element is not found
    return -1;
}

int main()
{
    // Note that size of arr[] is considered 100 according to
    // the constraints mentioned in problem statement.
    int arr[100], x, t, n;

    // Input the number of test cases you want to run
    cout << "Enter the number of test cases: ";
    cin >> t;

    // One by one run for all input test cases
    while (t--)
    {
        // Input the size of the array for the current test case
        cout << "Enter the size of array for this test case: ";
        cin >> n;

        // Input the array elements for the current test case
        cout << "Enter " << n << " elements of array separated by space: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // Input the element to be searched for the current test case
        cout << "Enter the element to be searched: ";
        cin >> x;

        // Compute and print result
        cout << search(arr, n, x) << "\n";
    }
    return 0;
}