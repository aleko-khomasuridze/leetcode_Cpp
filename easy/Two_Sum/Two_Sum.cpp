#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans; // Mapping from element to its index

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i]+nums[j] == target && i != j){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        
        // If no solution is found, return an empty vector or handle it as needed.
        return {};
    }
};

Solution sol;

int main(){
    // Test Case 1: Basic case with a solution
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = sol.twoSum(nums1, target1);
    cout << "Test Case 1: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    // Test Case 2: No solution
    vector<int> nums2 = {3, 5, 8, 12};
    int target2 = 25;
    vector<int> result2 = sol.twoSum(nums2, target2);
    cout << "Test Case 2: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    // Test Case 3: Multiple solutions (picking the first one found)
    vector<int> nums3 = {3, 2, 4};
    int target3 = 6;
    vector<int> result3 = sol.twoSum(nums3, target3);
    cout << "Test Case 3: ";
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    // Add more test cases as needed...

    return 0;
}