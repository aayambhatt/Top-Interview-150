#include<iostream>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    //pointer to write 
    int writeIndex = 0;

    //  now we'll scan the nums array
    for(int readIndex = 0; readIndex<nums.size() ; readIndex++){
        // only copy elements when not equal to val
        if(nums[readIndex]!=val){
            nums[writeIndex] = nums[readIndex];

            // we increase writeIndex so that the next valid number is placed at the next position.
            writeIndex++;
        }
    }
    // Returning the count of elements not equal to val
    return writeIndex;
}


int main()
{
 return 0;
}