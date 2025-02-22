#include<iostream>
using namespace std;

int removeDuplicates(vector<int> &nums){
    int writeIndex = 2;
    
    // edge case 
    if(nums.size()<=2){
        return nums.size();
    }

    // now we'll traverse
    for(int readIndex = 2 ; readIndex<nums.size(); readIndex++){
        // Check if current element can be included (at most twice)
        if(nums[readIndex]!=nums[writeIndex-2]){
            nums[writeIndex] = nums[readIndex];
            writeIndex++;
        }
    }

    return writeIndex;

}


int main()
{

 return 0;
}