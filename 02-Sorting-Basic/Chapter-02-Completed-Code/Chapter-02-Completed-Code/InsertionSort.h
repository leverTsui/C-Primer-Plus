//
//  insertionSort.h
//  Chapter-02-Completed-Code
//
//  Created by 徐利华 on 2019/5/6.
//  Copyright © 2019年 徐利华. All rights reserved.
//

#ifndef InsertionSort_h
#define InsertionSort_h

#include <iostream>

template<typename T>
void insertionSort(T arr[], int n){
    
    for( int i = 1 ; i < n ; i ++ ) {
        T e = arr[i];
        int j; // j保存元素e应该插入的位置
        for (j = i; j > 0 && arr[j-1] > e; j--)
            arr[j] = arr[j-1];
        arr[j] = e;
    }
    
    return;
}

#endif /* InsertionSort_h */
