#include <iostream>
using namespace std;

//Given an array of integers nums and an integer target,
//return indices of the two numbers such that they add up to target.

int main(){

    int nums[] = {1, 2, 3, 4, 5, 6};
    int target = 6;
    int n = sizeof(nums) / sizeof(nums[0]);
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target){
                cout << "Indices: " << i << ", " << j << endl;
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(!found){
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
}
