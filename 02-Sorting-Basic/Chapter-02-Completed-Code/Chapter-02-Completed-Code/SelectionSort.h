//
//  selectionSort.h
//  Chapter-02-Completed-Code
//
//  Created by 徐利华 on 2019/5/6.
//  Copyright © 2019年 徐利华. All rights reserved.
//

#ifndef SelectionSort_h
#define SelectionSort_h

#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
void selectionSort(T arr[], int n){
    
    for(int i = 0 ; i < n ; i ++){
        
        int minIndex = i;
        for( int j = i + 1 ; j < n ; j ++ )
            if( arr[j] < arr[minIndex] )
                minIndex = j;
        
        swap( arr[i] , arr[minIndex] );
    }
}

#endif /* SelectionSort_h */
