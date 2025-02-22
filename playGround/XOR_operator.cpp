#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int temp = 0;
            for(int num:nums)
            {
                temp ^= num;
            }
            return temp;
        }
    };

int main(){
    vector<int> nums = {1,2,3,4,6,4,3,2,1};
    Solution solution;
    int result = solution.singleNumber(nums);

    cout << "single number: " << result << endl;
    return 0;
}
