#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    
    int queries;
    cin >> queries;
    
    while(queries--){
        int length,max_num = -1;
        cin >> length;
        
        int array[length];
        for(int i = 0; i < length; i++){
            cin >> array[i];
            if(array[i] > max_num){
                max_num = array[i];
            }
        }
        
        unordered_map<int, int> sum_freq;
        
        int i = 0,j = length-1;
        int sum,max_freq = -1;
        
        for(; i <= j; i++,j--){
            sum = array[i] + array[j];
            if(  (length % 2 == 1 && array[length/2] % 2 == 1 && sum % 2 == 1)  || sum <= max_num){
                continue;
            }else{;}
            sum_freq[sum]++ ;
            if(sum_freq[sum] > max_freq){
                max_freq = sum_freq[sum];
            }
        }
        
        cout << length - length/2 - max_freq << "\n";
        
    }
    
}
