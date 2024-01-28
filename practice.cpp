// Program to demonstrate working 
// of enum in C++ 

// #include <iostream> 
// using namespace std; 

// struct student
// {
//     public:
//         string name;
//         int cls;
//     int rollNo;
//     int add(int a, int b){
//         return a+b;
//     }
// };
// int main(){
//     student student1;
//     int a = 4;
//     string b = "lucky asnari";
//     cout << a << endl;
//     cout << b << endl;
//     student1.name = "lucky";
//     cout << student1.name;
//     int sum = student1.add(2,3);
//     cout << "Sum is: " <<sum<<endl;
//     student sutdent2;
//     sutdent2.name = "mohan";
//     cout<<sutdent2.name;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

//     // Accessing elements of the array
//     cout << "The element at arr[1][2] is: " << arr[1][2] << endl;

//     // Printing the array in tabular format
//     cout << "\nTable representation of the array:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << " " << arr[i][j] << " |";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

//  Here is the Spyral travercing of the matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5,m =5;
//     int arr[5][5] = {{1, 2, 3, 4, 5},
//                 {6, 7, 8, 9, 10},
//                 {11, 12, 13, 14, 15},
//                 {16, 17, 18, 19, 20},
//                 {21, 22, 23, 24, 25}};
                
//     int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;
//     while (row_start<=row_end && column_start<=column_end)
//     {
//         // form left to right
//         for(int i=column_start;i<=row_end;i++){
//             cout<<arr[row_start][i]<<" ";
//         }  
//         row_start++;

//         // from top to bottom
//         for(int i = row_start; i<=column_end;i++){
//             cout<<arr[i][column_end]<<" ";
//         } 
//         column_end--;

//         // from right to left
//         for(int i = column_end; i>=column_start;i--){
//             cout<<arr[row_end][i]<<" ";
//         }
//         row_end--;

//         // from bottom to top
//         for (int i=row_end; i>=row_start;i--){
//             cout<<arr[i][column_start]<<" ";
//         }
//         column_start++;
        
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int  *ptr = NULL;
//     int var =34;
//     int *ponter = NULL;
//     ponter = &var;
//     cout << ponter <<endl;
//     cout << "The value of ptr is " << ptr <<endl;
//     cout << ponter <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int decimal = 15;
//     cout << "Decimal: " << decimal << endl;

//     return 0;
// }



// #include <iostream>
//     using namespace std;

//     int main () {
//         double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
//         double *p;

//         p = balance;

//         cout<<bool(balance[1]==1[balance])<<endl;

//         // output each array element's value 
//         cout << "Array values using pointer " << endl; 
//         for ( int i = 0; i < 5; i++ ) {
//             cout << "*(p + " << i << ") : ";
//             cout << *(p + i) << endl;
//         }

//         cout << "Array values using balance as address " << endl;
//         for ( int i = 0; i < 5; i++ ) {
//             cout << "*(balance + " << i << ") : ";
//             cout << *(balance + i) << endl;
//         }

//         return 0;
//     }


    // #include<iostream>
    // using namespace std;
    // int main(){
    //     int arr[2][3] = {{1,2,3},{4,5,6}};
    //     cout<<arr<<endl;
    //     cout<<&arr[0][0]<<endl;
    //     cout<<arr[0]<<endl;
    //     cout<<&arr[0]<<endl;

    //     cout<<arr[1]<<endl;
    //     cout<<&arr[1]<<endl;
    //     cout<<&arr[1][0]<<endl;

    //     cout<<arr[0]+1<<endl;
    //     cout<<&arr[0]+1<<endl;
    //     cout<<arr[1]+1<<endl;
    //     cout<<&arr[1]+1<<endl;

    //     return 0;
    // }

// #include<iostream>
//     using namespace std;
//     int x = 10;
//     int main(){
//         int x = 20;
//         {
//             int x = 30;
//             cout<<x<<endl;
//             cout<<::x<<endl;
//         }
//         cout<<x<<endl;
//         cout<<::x<<endl;
//         return 0;
// }


#include<iostream>
using namespace std;
int global = 10;
void inner(){
    global++;
    global = global%10;
    cout<<global<<endl;
}

int local(){
    inner();
    int global = 20;
    global++;
    cout<<global<<endl;
}

int main(){
    cout<<global<<endl;
    local();
    cout<<global<<endl;
    return 0;
}