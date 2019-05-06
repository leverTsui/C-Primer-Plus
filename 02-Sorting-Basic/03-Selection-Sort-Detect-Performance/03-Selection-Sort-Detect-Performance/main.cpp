//
//  main.cpp
//  03-Selection-Sort-Detect-Performance
//
//  Created by 徐利华 on 2019/5/6.
//  Copyright © 2019年 徐利华. All rights reserved.
//
#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // 寻找[i,n)区间里的最小值，然后和i所对应的值交换
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(int argc, const char * argv[]) {
    
    int n = 20000;
    int *arr =  SortTestHelper::generateRandomArray(n, 0, n);
    SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);
    SortTestHelper::printArray(arr, n);
    
    return 0;
}
