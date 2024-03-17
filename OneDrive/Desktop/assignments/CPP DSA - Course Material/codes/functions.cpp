#include <iostream>
#include <queue>
#include<cstdlib>
using namespace std;


// f(x,y) = x+y

// z = f(1,2)
    // f(1,2) = 1 + 2 = 3
// z = 3

// return_type  function_name  (input datatypes){
    
//     // logic here...
//     return return_data;
// }
// vectors
// vector<int> vec;
// add(vec); -> pass by value
// add(&vec); -> pass by reference


void add(int a, int b){
    int c = a + b;
    cout << c << endl;
}

void print_array(int arr[], int* n){
    
    
    for(int i=0;i<*n;i++){
        cout << arr[i] << " ";
    }
    arr[0]  = arr[0] + 10; // *(arr + 0) = *(arr + 0) + 10
    arr[1] = arr[1] + 10;
    
    // arr[i] = *((&arr[0]) + i) = *(arr + i)
    // 
    
    *n = *n+10;
    
    cout << endl;
}

int main(){
    int n;
    cin >> n; // n= 3
    
    int arr[n]; // size = 3
    for(int i=0;i<n;i++) cin >> arr[i];
    
    print_array(arr, &n); // -> pass by reference
    
    cout << n << endl; // n = 13
    
    print_array(arr, &n); // arr_size = 3, n = 13
    
    
    return 0;
}