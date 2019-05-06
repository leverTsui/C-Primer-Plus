//
//  SortTestHelper.h
//  03-Selection-Sort-Detect-Performance
//
//  Created by 徐利华 on 2019/5/6.
//  Copyright © 2019年 徐利华. All rights reserved.
//

#ifndef SortTestHelper_h
#define SortTestHelper_h

#include <iostream>
#include <ctime>
#include <cassert>
#include <string>

using namespace std;

namespace SortTestHelper {
    
    // 生成有n个元素的随机数组
    int *generateRandomArray(int n, int rangeL, int rangeR) {
        assert(rangeL <= rangeR);
        
        int *arr = new int[n];
        
        srand((int)time(NULL));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;
    }
    
    template<typename T>
    void printArray(T arr[], int n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    template<typename T>
    bool isSorted(T arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }

    int *copyIntArray(int a[], int n) {
        int *arr = new int[n];
        copy(a, a+n, arr);
        return arr;
    }
    
    template<typename T>
    void testSort(const string &sortName,void(*sort)(T[],int),T arr[], int n) {
        clock_t startTime = clock();
        sort(arr,n);
        clock_t endTime = clock();
        
        assert(isSorted(arr, n));
        cout << sortName << " : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
        return;
    }
};


#endif /* SortTestHelper_h */
