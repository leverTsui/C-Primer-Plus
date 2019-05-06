//
//  main.cpp
//  04-Insertion-Sort
//
//  Created by 徐利华 on 2019/5/6.
//  Copyright © 2019年 徐利华. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include "selectionSort.h"
#include "SortTestHelper.h"

using namespace std;

template<typename T>
void insertionSort(T arr[], int n) {
    for (int i = 1; i < n; i++) {
        // 寻找元素arr[i]合适的插入位置
        
        //写法一
//        for (int j = i; j > 0; j--) {
//            if (arr[j] < arr[j-1]) {
//                swap(arr[j], arr[j-1]);
//            } else {
//                break;
//            }
//        }
        
        //写法二
        for (int j = i; j > 0 && arr[j] < arr[j-1]; j--) {
            swap(arr[j], arr[j-1]);
        }
    }
}

int main(int argc, const char * argv[]) {
    
    int n = 20000;
    
    cout<<"Test for random array, size = "<<n<<", random range [0, "<<n<<"]"<<endl;
    int *arr1 = SortTestHelper::generateRandomArray(n,0,n);
    int *arr2 = SortTestHelper::copyIntArray(arr1, n);
    
    SortTestHelper::testSort("Insertion Sort", insertionSort,arr1,n);
    SortTestHelper::testSort("Selection Sort", selectionSort,arr2,n);
    
    delete[] arr1;
    delete[] arr2;
    
    cout<<endl;
    return 0;
}
