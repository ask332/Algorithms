#include <iostream>
using namespace std;
void printArray(int a[], int n){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<"   ";
    }
    cout<<endl;
}
void insertionSort(int a[], int n){
    int i,j,temp_a,temp_b;
//Traversing through each element in the array(key)
    for(i = 1; i<n; i++ ){
        cout<<"Pass "<<i<<endl;
        int temp_a = a[i];
        j = i-1;
//Comparing and adding element into sorted subarray
        while(j >= 0 & a[j] > temp_a){ //Condition for swapping
        //keep swapping untill you find a smaller than the key
            temp_b = a[j + 1];
            a[j + 1] = a[j];
            a[j] = temp_b;
            printArray(a,n);
            cout<<"--------------"<<endl;
            j--;
        }
        a[j + 1] = temp_a;
        cout<<"==============="<<endl;
        printArray(a,n);
        
    }
}

int main(){
    int n;
    cout<<"Enter number of elemnts in the array"<<endl;
    cin>> n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i < n; i++){
        cin>> a[i];
    }
    insertionSort(a,n);
    cout<<"Final output: "<<endl;
    cout<<"==================="<<endl;
    printArray(a, n);
    cout<<"==================="<<endl;
    

    return 0;
}
/*
Enter number of elemnts in the array
5
Enter the elements
3 
2
4
1
8
Pass 1
2   3   4   1   8
--------------
===============
2   3   4   1   8
Pass 2
===============
2   3   4   1   8
Pass 3
2   3   1   4   8
--------------
2   1   3   4   8
--------------
1   2   3   4   8
--------------
===============
1   2   3   4   8
Pass 4
===============
1   2   3   4   8
Final output:
===================
1   2   3   4   8
===================

for a sorted array
5
Enter the elements
1
2
3
4
5
Pass 1
===============
1   2   3   4   5   
Pass 2
===============
1   2   3   4   5
Pass 3
===============
1   2   3   4   5
Pass 4
===============
1   2   3   4   5   
Final output:
===================
1   2   3   4   5
===================

for a reverse sorted array
Enter number of elemnts in the array
5
Enter the elements
5
4
3
2
1
Pass 1
4   5   3   2   1
--------------
===============
4   5   3   2   1
Pass 2
4   3   5   2   1
--------------
3   4   5   2   1
--------------
===============
3   4   5   2   1
Pass 3
3   4   2   5   1
--------------
3   2   4   5   1   
--------------
2   3   4   5   1
--------------
===============
2   3   4   5   1
Pass 4
2   3   4   1   5
--------------
2   3   1   4   5
--------------
2   1   3   4   5
--------------
1   2   3   4   5
--------------
===============
1   2   3   4   5
Final output:
===================
1   2   3   4   5   
===================
*/
