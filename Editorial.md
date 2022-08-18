You are given an array A of length N. 
 
let sum = A[i] + A[N-i-1]
 
For making the array good in the minimum number of operations, you should first calculate the sum for every I from i = 0 to I < (n+1)/2 and also store their frequency. 
 
Now the sum whose frequency is maximum should be your target sum for every other element, and it will take minimum operations because now you have to do the operations for the least number of elements.
 
You can update any one element out of A[i] and A[N-i-1] instead of two.
 
The catch here is that every element is positive, and if your target sum is less than or equal to some other element, then you can't make the sum for that element equal to the target sum. 
 
Also, if N is odd, then if your target sum is odd, then it will not be possible for you to make the sum for A[N/2] equal to the target sum because A[N/2]*2 will always be even.
 
So, you should not take the sum for these cases, and it will not make a problem for us in deciding target sum. 
 
 
