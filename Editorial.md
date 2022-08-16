You are given an array A of length N. 

let sum = A[i] + A[i-1]
For making it good in minimun number of operations, you should First calculate sum of every i from i == 0 to i < (n+1)/2 and also store there frequency. Now the sum whose frequency is maximum should be your target sum for every other elements and it will take minimum operations because you have to now do operations for least number of elements.
The catch here is that every element is positive and you if your target sum is less then some other
