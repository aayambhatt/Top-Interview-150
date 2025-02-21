#include<iostream>
using namespace std;

int removeDuplicates(vector<int>& nums){
    // to track where next unique element should be placed
    //first element is always unique so initiate from 1
    int writeIndex = 1;
    
    // and we'll scan through nums using readIndex
    for(int readIndex = 1; readIndex<nums.size(); readIndex++){
        //copy only when nums[readIndex] is different from nums[writeIndex - 1]
        if(nums[readIndex]!=nums[writeIndex-1]){
            nums[writeIndex] = nums[readIndex];

            //increment writeIndex
            writeIndex++;
        }
    }

    //return the answer
    return writeIndex;


}

int main()
{
 return 0;
}