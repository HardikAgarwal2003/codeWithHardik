#include<iostream>
#include<vector>
using namespace std;
class solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};
int main()
{
	solution s1;
	vector<int> nums;
	nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    int target = 7;
    vector<int> ptr = s1.twoSum(nums, target);
	cout << ptr[0] << " " << ptr[1];
	return 0;
}
