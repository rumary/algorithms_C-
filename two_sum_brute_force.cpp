//  main.cpp
//  task_2
//  https://leetcode.com/articles/two-sum/
//  Created by Maria Ryzhova on 11.12.16.
//  Copyright © 2016 Maria Ryzhova. All rights reserved.
//

#include <iostream>
using namespace std;

void twoSum(int* nums, int size, int target);

int main() {
    int nums[] = {7,2,3,4,5};
    int target = 5;
    int size = sizeof(nums)/sizeof(int);
    twoSum(nums, size, target);
    return 0;
    
}

void twoSum(int* nums, int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[j] == target - nums[i]) {
                cout<<"elements numbers are "<<i<<" and "<<j<<endl;
                break;
            }
        }
    }
}
