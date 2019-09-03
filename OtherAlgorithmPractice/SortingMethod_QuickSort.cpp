
//
//  SortingMethod_QuickSort.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 23/05/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//#include <iostream>
//using namespace std;
//int arr[] = {9,6,7,5,8,4,2,3,1,0};
//
//void quickSort(int *arr, int start, int end){
//    if(start>=end) return;
//    
//    int piv=start;
//    int i = start+1;
//    int j = end;
//    
//    while(i<=j){
//        while(i<=end && arr[i]<arr[piv]){
//            i++;
//        }
//        while(j>start && arr[j]>arr[piv]){
//            j--;
//        }
//        
//        if(i<=j){
//            int temp=arr[j];
//            arr[j]=arr[i];
//            arr[i]=temp;
//        }else{
//            int temp=arr[j];
//            arr[j]=arr[piv];
//            arr[piv]=temp;
//        }
//    }
//    printf("START : %d\n",start);
//    for(int i=0; i<=9; i++){
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    quickSort(arr, start, j-1);
//    quickSort(arr, j+1, end);
//}
//
//int main(){
//    ios_base :: sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    quickSort(arr,0,9);
//    
//////    cout << arr[0];
////    for(auto a : arr){
////        cout << a << " ";
////    }
//    cout << endl;
//    return 0;
//}
