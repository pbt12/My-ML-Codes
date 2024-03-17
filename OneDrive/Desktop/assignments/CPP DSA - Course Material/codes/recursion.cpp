#include<iostream>
#include<stdio.h>

using namespace std;


// long long factorial(long long n){
    
//     // n! = n * (n-1)!
//     // fact(n) = n * fact(n-1); 
    
//     if(n==1) return 1; // base case
    
//     long long result;
    
//     result = n * factorial(n-1);
    
//     return result;
// }


/* 
    f(4): 
        result = 4 * f(4-1) = 4 * (3 * f(2))
                = 4 * (3 * (2 * f(1)))
                = 4 * ( 3 * (2 * 1 * f(0)))
                 = 4 * ( 3 * (2 * 1 * (0 * f(-1)))
*/


int main(){
    
    
    // functions
    // Recursion
    
    // HW0: try pass by referecne and pass by value with strings
    // Deduction: pass by value, pass by reference works for strings however not the case of char arrays
    
    /* HW1: take size of 2D - array & array elements as inputs from user, 
     use a function to calculate sum of array elemtns in the array and print in the main*/
    // 
    
    
    /* HW2: take a power of 10s number as input, and find the power used using function e.g., input: 1000000, output: 6*/
    // Solution: Recursion....
    
    /* HW3: take n as input from user, find n! and print in the main, 
    i. guaratneed that 0<=n<=7
    ii. 0<n<=48 */
    
    
    
    
    /*-----------------------------HW3 using simple loop------------------------------*/
    
    /* HW3: take n as input from user, find n! and print in the main, fucntions
    0<n<=35 */
    
    // int n;
    // cin >> n;
    
    // n * (n-1)*(n-2) * (n-3)......3*2*1!;
    
    // 1*2*3*....*(n-2)*(n-1)*n;
    
    // int curr_var = 1;
    // long long result = 1;
    
    
    // for(curr_var = 1; curr_var <= n; curr_var++){
    //     result = result * curr_var;
        
    //     // f(x,y) = x*y;
    //     //
        
    //     // result*=curr_var;
    //     // i+=1
    //     // result/=curr_var;
    // }
    
    // cout << res << endl;
    
    
    
    /*-----------------------------HW3 using simple loop------------------------------*/
    
    
    
    
    // int n;
    // cin >> n;
    
    // n * (n-1)*(n-2) * (n-3)......3*2*1;
    
    // 1*2*3*....*(n-2)*(n-1)*n;
    
    // int curr_var = 1;
    // long long result = 1;
    
    
    // for(curr_var = 1; curr_var <= n; curr_var++){
        
        
    //     // result = result * curr_var;
        
    //     result = multiply(result, curr_var);
    // }
    
    // result = 1;
    // result = 1*2;
    // result 1*2*3;
    // result = 1*2*3*4;
    
    // result = (1*2*3) * 4
    //       = ((1*2) * 3) * 4
           
    //       = (multiply(1,2) * 3) * 4
           
    //       = multiply( multiply(1,2) , 3) * 4
           
    //       = multiply (mulitply (mulitply(1,2), 3) ,4);
           
    // long long result = factorial(n);
    // cout <<result << endl;
    
    // array, sum of all elemnts in the array
    // for(int i=0;i<sizeofarray;i++) sum+=arr[i];
    // cout << sum << endl;
    
    
    return 0;
}