#include<iostream>
using namespace std;

class Solution {
    public:
        void reverse(vector<int> &nums, int left, int right){
            while(left<right){
                swap(nums[left],nums[right]);
                right--;
                left++;
            }
        }
    
        void rotate(vector<int>& nums, int k) {
            
            int n = nums.size();
             k = k % n; // In case k > n, we take modulo
    
            //Reverse entire array
            reverse(nums, 0, n - 1);
    
            //Reverse first k elements
            reverse(nums, 0, k - 1);
    
            //Reverse last n-k elements
            reverse(nums, k, n - 1);
    
        }
    };

int main()
{
 return 0;
}