You are given an array A of length N. 

let sum = A[i] + A[i-1]
For making the array good in minimun number of operations, you should first calculate the sum for every i from i = 0 to i < (n+1)/2 and also store there frequency. Now the sum whose frequency is maximum should be your target sum for every other element and it will take minimum operations because you have to now do operations for least number of elements. You can update any one element out of A[i] and A[N-i]
The catch here is that every element is positive and if your target sum is less then or equal to some other element than you can't make sum for that element equal to target sum. Also if N is odd then if your target sum is odd then it will not be possible for you to make sum for A[N/2] equal to target sum because A[N/2]*2 will always be even. So, you should not take sum for these cases. 
