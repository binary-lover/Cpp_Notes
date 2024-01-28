// definition of asymptotic  is to find the no. of instructions executed by the program as the input size increases
// groth rate of the function is the rate at which the no. of instructions executed by the program increases as the input size increases
// slower the groth rate of the function, faster the function is and affeciency of the program is high

// some orders are as follows
// 1. constant order        (O(1))
// 2. logarithmic order     (O(logn))
// 3. linear order          (O(n))
// 4. nlogn order           (O(nlogn))
// 5. quadratic order       (O(n^2))
// 6. cubic order           (O(n^3))
// 7. exponential order     (O(2^n))

// 1. constant order        (O(1))
// in this order, the no. of instructions executed by the program is constant as the input size increases
// for example, if we have a function which prints the first element of the array, then the no. of instructions executed by the program is constant


// 2. logarithmic order     (O(logn))
// In this order, the number of instructions executed by the program increases logarithmically as the input size increases.
// For example, if we have a binary search algorithm, the number of instructions executed will increase logarithmically with the size of the input.

// 3. linear order          (O(n))
// In this order, the number of instructions executed by the program increases linearly as the input size increases.
// For example, if we have a function that iterates through an array and performs a constant number of operations on each element, the number of instructions executed will be directly proportional to the size of the array.

// 4. nlogn order           (O(nlogn))
// In this order, the number of instructions executed by the program increases linearly multiplied by the logarithm of the input size.
// For example, if we have a sorting algorithm like merge sort or quicksort, the number of instructions executed will be proportional to the size of the input multiplied by the logarithm of the input.

// 5. quadratic order       (O(n^2))
// In this order, the number of instructions executed by the program increases quadratically as the input size increases.
// For example, if we have a nested loop that iterates through an array and performs a constant number of operations on each pair of elements, the number of instructions executed will be proportional to the square of the size of the array.

// 6. cubic order           (O(n^3))
// In this order, the number of instructions executed by the program increases cubically as the input size increases.
// For example, if we have a nested loop that iterates through an array and performs a constant number of operations on each triplet of elements, the number of instructions executed will be proportional to the cube of the size of the array.

// 7. exponential order     (O(2^n))
// In this order, the number of instructions executed by the program increases exponentially as the input size increases.
// For example, if we have a recursive function that generates all subsets of a set, the number of instructions executed will be proportional to 2 raised to the power of the size of the input.
// 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int addAllNaturalNumber(int n, int m){
    int sum = 0;
    for(int j = n; j <= m; j++){
        sum += j;
    }
    return sum;
}
int addAllNaturalNumberByAP(int n, int m){
    int sum = 0;
    sum = (m*(m+1))/2 - ((n-1)*n)/2;
    return sum;
}
int main(){
    int sum = addAllNaturalNumber(1,2);
    int sum1 = addAllNaturalNumberByAP(1,2);
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr)/4;
    cout<<len<<endl;
    cout<<sum<<endl;
    cout<<sum1<<endl;
    return 0;
}


// here time complexity of addAllNaturalNumber() is O(n) and addAllNaturalNumberByAP() is O(1)
// so addAllNaturalNumberByAP() is more efficient than addAllNaturalNumber()
