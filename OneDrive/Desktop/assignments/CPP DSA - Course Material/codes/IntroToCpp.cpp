// --> include libraries

#include<iostream>
#include <climits>
#include<stdio.h>

using namespace std;



int main(){
    
    
   // data_type variable_name; // decalration
    //    variable_name = 5; // initialisation
    
    // decalre and initialisation
    // int n = 6, a=5, b=100;
    
    // cout << &n << endl;
    
    // cout << &a << endl;
    
    // cout << &b << endl;
    // int n; 
    
    // cin >> n >> a >> b;
    
    // cout << n << " " << a << " " << b << endl;
    
    // data types:
    // 10, 100
    // int - -2^31 to 2^31 - 4bytes (32bits - 1/0 => )
    // long long - -2^63 to 2^64
    // float  - (-2^31 to 2^31) - it allows deciamls 
    // double - (-2^64 to 2^64) -it allows decimals
    
    // cout << sizeof(n);
    
    // float point = 5.6;
    
    // cout << sizeof(point);
    
    // long long long_val = 1000;
    
    // cout << sizeof(long_val);
    
    // double double_val = 5.698;
    
    
    // char flag = '~';
    // cout << flag << endl;
    
    // string name = "a";
    // // cout << name << endl;
    
    // cout << name + 1 << endl;
    
    // int a = 1000000;
    // cout << INT_MAX << endl;
    // cout << LLONG_MAX << endl;
    // cout << INT_MIN << endl;
    // cout << LLONG_MIN << endl;
    
    // int var = INT_MAX+1;
    // cout << var << endl;
    
    
    
    // i have to take 1000 studnets inputs in one geo-location, store it in a db,
    // print it in another location
    
    
    // data_type   array_name[No_of_elements]; // array decalration
    
    // int marks[3]; // => 3 integers in contiguos locations
    // int marks[3];
    // 
    // cin >> marks[0];
    // cin >> marks[1];
    // ..
    // ..
    // cin >> marks[999];
    
    // i=0;
    // i=0 .. i=999;
    // cin >> marks[i];
    
    // for(_decalrion/initialisation__ ; __condition check__ ; __operation__){
    //     // logic...
    // }
    
    // int marks[3] = {1,2,3};
    
    // int i;
    // for(i=0;i<3;i++){
    //     cin >> marks[i];
    // }
    
    
    // for(i=0; i<3; i++){
    //     cout << marks[i] << " ";
    // }
    
    // for(int i=0;i<3;i++){
    //     cout << &marks[i] << " ";
    // }
    // cout << endl;
    
    // int marks[3] = {1,2,3};
    // cout << *marks;
    
    // for(int i=0;i<3;i++){
    //     // &marks[i] -> *&marks[i] -> marks
    //     cout << &marks[i] << " ";
    // }
    // cout << marks << endl;
    
    // *(marks + 2) = marks[2]
    
    // cout << *(marks + 1) << endl;
    
    // int marks[3] = {1,2,3};
    // for(int i=0;i<3;i++){
    //     cout << *((&marks[0]) + i) << " ";
    //     cout << *(marks+i) << " ";
    //     cout << marks[i] << " ";
    // }
    
    
    // long long arr[] = {1,2,3,4,5,6,7,451,451, 84 ,561, 9,1, 61};

    int number_of_students;
    cin >> number_of_students;
    // cout << number_of_students << endl;
    
    int arr[number_of_students];
    for(int i=0;i<number_of_students;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
