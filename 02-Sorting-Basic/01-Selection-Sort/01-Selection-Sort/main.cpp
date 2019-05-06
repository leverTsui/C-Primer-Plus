//
//  main.cpp
//  01-Selection-Sort
//
//  Created by 徐利华 on 2019/5/6.
//  Copyright © 2019年 徐利华. All rights reserved.
//

#include <iostream>
#include <algorithm>

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
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    selectionSort(a, 10);
    for (int i = 0; i < 10; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
