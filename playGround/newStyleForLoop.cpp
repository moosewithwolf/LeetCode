// Range-based for loop (C++11 ver)
#include <iostream>

int main(){
    int arr[] = {1,2,3,4,5,6,7};

    for(int num : arr){
        std::cout << num;
    }
    
    return 0;
}