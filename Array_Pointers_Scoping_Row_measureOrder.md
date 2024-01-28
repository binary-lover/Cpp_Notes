# Pointers

* A pointer is a variable that stores the address of another variable. Like any variable or constant, you must declare a pointer before using it to store any variable address. The general form of a pointer variable declaration is −

    ```c++
    type *var-name;
    ```
* Here, type is the pointer's base type; it must be a valid C++ type and var-name is the name of the pointer variable. The asterisk * used to declare a pointer is the same asterisk used for multiplication. However, in this statement the asterisk is being used to designate a variable as a pointer. Take a look at some of the valid pointer declarations −

    ```c++
    int    *ip;    /* pointer to an integer */
    double *dp;    /* pointer to a double */
    float  *fp;    /* pointer to a float */
    char   *ch     /* pointer to a character */
    ```
* The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, a long hexadecimal number that represents a memory address. The only difference between pointers of different data types is the data type of the variable or constant that the pointer points to.

* The following example declares and initializes pointers of different types −

    ```c++
    #include <iostream>
    using namespace std;

    int main () {
        int  var1;
        char var2[10];

        cout << "Address of var1 variable: ";
        cout << &var1 << endl;

        cout << "Address of var2 variable: ";
        cout << &var2 << endl;

        return 0;
    }
    ``` 
* When the above code is compiled and executed, it produces the following result −

    ```c++
    Address of var1 variable: 0xbfebd5c0
    Address of var2 variable: 0xbfebd5b6
    ```
* The actual address of the variable is assigned to the pointer. And, the pointer can be assigned to any other pointer of the same type. Take a look into the following example −

    ```c++
    #include <iostream>
    using namespace std;

    int main () {
        int  var = 20;   // actual variable declaration.
        int  *ip;        // pointer variable 

        ip = &var;       // store address of var in pointer variable

        cout << "Value of var variable: ";
        cout << var << endl;

        // print the address stored in ip pointer variable
        cout << "Address stored in ip variable: ";
        cout << ip << endl;

        // access the value at the address available in pointer
        cout << "Value of *ip variable: ";
        cout << *ip << endl;

        return 0;
    }
    ```
* When the above code is compiled and executed, it produces the following result −

    ```c++
    Value of var variable: 20
    Address stored in ip variable: 0xbfc601ac
    Value of *ip variable: 20
    ```

* Null Pointers in C++

    * It is always a good practice to assign a NULL value to a pointer variable in case you do not have an exact address to be assigned. This is done at the time of variable declaration. A pointer that is assigned NULL is called a null pointer.
    * The NULL pointer is a constant with a value of zero defined in several standard libraries, including iostream. Consider the following program −

        ```c++
        #include <iostream>
        using namespace std;

        int main () {
            int  *ptr = NULL;

            cout << "The value of ptr is " << ptr ;

            return 0;
        }
        ```
    * When the above code is compiled and executed, it produces the following result −

        ```c++
        The value of ptr is 0
        ```
    * In most of the operating systems, programs are not permitted to access memory at address 0 because that memory is reserved by the operating system. However, the memory address 0 has special significance; it signals that the pointer is not intended to point to an accessible memory location. But by convention, if a pointer contains the null (zero) value, it is assumed to point to nothing.
    * To check for a null pointer, you can use an if statement as follows −

        ```c++
        if(ptr)     /* succeeds if p is not null */
        if(!ptr)    /* succeeds if p is null */
        ```
        - This type of if statement is used to check if a pointer is null or not. like if(ptr) will return true if ptr is not null and false if it is null.

## Arrays as Pointer

* Let us recall the concept of arrays and pointers. Consider the following array definition −

    ```c++
    double balance[50];
    ```
* Here, balance is a variable array which is sufficient to hold up to 50 double numbers. Here, we can think `balance` as a pointer pointing to the first element of the array `balance`. Therefore, *(balance + 4) is a valid expression which gives us the value of the 5th element stored in the array. Let us try to access array elements using pointer notation and array notation. The following program makes use of the concept −

    ```c++
    #include <iostream>
    using namespace std;

    int main () {
        double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
        double *p;

        p = balance;

        // output each array element's value 
        cout << "Array values using pointer " << endl; 
        for ( int i = 0; i < 5; i++ ) {
            cout << "*(p + " << i << ") : ";
            cout << *(p + i) << endl;
        }

        cout << "Array values using balance as address " << endl;
        for ( int i = 0; i < 5; i++ ) {
            cout << "*(balance + " << i << ") : ";
            cout << *(balance + i) << endl;
        }

        return 0;
    }
    ```


* When the above code is compiled and executed, it produces the following result −

    ```c++
    Array values using pointer
    *(p + 0) : 1000
    *(p + 1) : 2
    *(p + 2) : 3.4
    *(p + 3) : 17
    *(p + 4) : 50
    Array values using balance as address
    *(balance + 0) : 1000
    *(balance + 1) : 2
    *(balance + 2) : 3.4
    *(balance + 3) : 17
    *(balance + 4) : 50
    ```
    ```c++
        cout<<bool(balance[1]==1[balance])<<endl;
        // will return 1 as both are same weahter we use balance[1] or 1[balance] as they are commutative in nature.

    ```
    * The size of element of array dipends on the type and compiler. For example in 32 bit compiler the size of int is 4 bytes and in 64 bit compiler the size of int is 8 bytes. So, the size of array will be 4* 5 = 20 bytes in 32 bit compiler and 8*5 = 40 bytes in 64 bit compiler.

    * Since Array is a continious block of memory so we can use pointer to access the array elements. so each element will take 4 bytes in 32 bit compiler and 8 bytes in 64 bit compiler. for example if array starts with address 1000 then the next element will be at 1002 in 16 bit compiler and 1004 in 32 bit compiler.

    

# 2D Array

A **two-dimensional array** is a collection of elements organized in rows and columns. It can be visualized as a table or a grid, where each element is accessed using two indices: one for the row and one for the column. Like a one-dimensional array, two-dimensional array indices also range from 0 to n-1 for both rows and columns  .

Here is an example of how to declare a 2D array in C++:

```c++
int arr[3][4];
```

This declares a 2D array `arr` with 3 rows and 4 columns. The size of the array is equal to the size of the data type multiplied by the total number of elements that can be stored in an array . We can calculate the total number of elements in an array by multiplying the size of each dimension of a multidimensional array . For example, the array `arr` can store a total of (3 x 4) = 12 elements.

We can initialize a 2D array using an initializer list in two ways. Below is the first method of initializing a 2D array using an initializer list:

```c++
int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
```

This initializes the 2D array `arr` with the values 1 to 12. The first set of braces `{}` represents the rows, and the second set of braces `{}` represents the columns .
 
Sure, here is an example of a 2D array in tabular format:

| **Index** | **0** | **1** | **2** | **3** |
|-------|-----|-----|-----|-----|
| **0** | 1   | 2   | 3   | 4   |
| **1** | 5   | 6   | 7   | 8   |
| **2** | 9   | 10  | 11  | 12  |

This table represents a 2D array `arr` with 3 rows and 4 columns. The first row contains the values 1 to 4, the second row contains the values 5 to 8, and the third row contains the values 9 to 12. We can access any element of the array using its row and column indices. For example, $$arr_{1,2}$$ would return the value 7.

* Here is the same information in C++ code:

    ```c++
    #include <iostream>
    using namespace std;

    int main() {
        int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

        // Accessing elements of the array
        cout << "The element at arr[1][2] is: " << arr[1][2] << endl;

        // Printing the array in tabular format
        cout << "\nTable representation of the array:\n";
        cout << "| **Index** | **0** | **1** | **2** | **3** |\n";
        cout << "|-------|-----|-----|-----|-----|\n";
        for (int i = 0; i < 3; i++) {
            cout << "| **" << i << "** |";
            for (int j = 0; j < 4; j++) {
                cout << " " << arr[i][j] << " |";
            }
            cout << "\n";
        }

        return 0;
    }
    ```

* Here is the Spyral travercing of the matrix

    ```c++
    #include<iostream>
    using namespace std;
    int main(){
    int n = 5,m =5;
    int arr[5][5] = {{1, 2, 3, 4, 5},
                {6, 7, 8, 9, 10},
                {11, 12, 13, 14, 15},
                {16, 17, 18, 19, 20},
                {21, 22, 23, 24, 25}};
                
    int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;
    while (row_start<=row_end && column_start<=column_end){

        // form left to right
        for(int i=column_start;i<=row_end;i++){
            cout<<arr[row_start][i]<<" ";
        }  
        row_start++;

        // from top to bottom
        for(int i = row_start; i<=column_end;i++){
            cout<<arr[i][column_end]<<" ";
        } 
        column_end--;

        // from right to left
        for(int i = column_end; i>=column_start;i--){
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;

        // from bottom to top
        for (int i=row_end; i>=row_start;i--){
            cout<<arr[i][column_start]<<" ";
        }
        column_start++;
        
        }
        return 0;
    }

    ```

# Row Major Order

* In row-major order, the consecutive elements of a row reside next to each other, whereas the consecutive elements of a column reside far apart. This is because the elements of a row are stored in consecutive memory locations, whereas the elements of a column are stored in locations that are far apart. This is illustrated in the following figure:

![order](https://upload.wikimedia.org/wikipedia/commons/thumb/4/4d/Row_and_column_major_order.svg/300px-Row_and_column_major_order.svg.png)


* lets understand with an example

    ```c++
    #include<iostream>
    using namespace std;
    int main(){
        int arr[2][3] = {{1,2,3},{4,5,6}};
        cout<<arr<<endl;
        cout<<&arr[0][0]<<endl;
        cout<<arr[0]<<endl;
        cout<<&arr[0]<<endl;
        cout<<arr[1]<<endl;
        cout<<&arr[1]<<endl;
        cout<<arr[0]+1<<endl;
        cout<<&arr[0]+1<<endl;
        cout<<arr[1]+1<<endl;
        cout<<&arr[1]+1<<endl;
        return 0;
    }
    ```
    * The output of the
    ```c++
        0x61fef8
        0x61fef8
        0x61fef8
        0x61fef8
        0x61ff04
        0x61ff04
        0x61fefc
        0x61ff04
        0x61ff08
        0x61ff10
    ```
    * The output of the above code is the address of the first element of the array. The address of the first element of the array is the same as the address of the array itself.

* Address calculation in general
    * Fro `1D` Array

        * The address of an element in a `1D array` is calculated as follows:

            `address = base_address + (index - start_index * size_of_data_type)`

        * For example, the address of the 3rd element of an integer array with base address 1000 is calculated as follows:

            ```c++
            address = 1000 + (2 * 2) = 1004 //  for 16 bit compiler
            address = 1000 + (2 * 4) = 1008 //  for 32 bit compiler
            address = 1000 + (2 * 8) = 1016 //  for 64 bit compiler
            // i take 2 because it will be 3rd element.
            ```

        * another example: an array starts with index -5 to 5 and size of int is 10 bytes. then find the address of arr[2].
        
            ```c++
            address = 1000 + ((2 - (-5 ) * 10)) = 1070

        * another example: an array starts with index -10 to 10 and size of int is 8 bytes. then find the address of arr[3].
        
            ```c++
            address = 1000 + ((3 - (-10 ) * 8)) = 1104
            // by solving it we get 1000 +(3+10)*8 = 1000 + 13*8 = 1000 + 104 = 1104
            ```

    * For `2D` Array
    
        * The address of an element in a `2D array` is calculated as follows:

            `address = Base_Address + (((row_index - start_index) * number_of_columns) + column_index - start_index) * size_of_data_type`
            
        * For example, the address of the element $arr_{2,3}$ of a 2D array with base address 1000 is calculated as follows: (starting index assumed to be 0)

            ```c++ 
            address = 1000 + ((2 * 4) + 3) * 2 = 1018 //  for 16 bit compiler
            address = 1000 + ((2 * 4) + 3) * 4 = 1026 //  for 32 bit compiler
            address = 1000 + ((2 * 4) + 3) * 8 = 1042 //  for 64 bit compiler
            ```
        * another example: an array starts with index -5 to 5 and size of int is 10 bytes. then find the address of arr[2][3]. and dimension of array is 5*5.
        
            ```c++
            int address = 1000 + (((2 - (-5)) * 5) + 3 - (-5)) * 10 
            cout<<address<<endl;
            ```

        * it will give output:
            ```c++
            1070

            // explaination: 1000 + ((2+5)*5 + 3+5)*10 = 1000 + (7*5 + 8)*10 = 1000 + (35 + 8)*10 = 1000 + 43*10 = 1000 + 430 = 1430
            ```
<br>


# Scope of Variables in c++

* Scope of a variable is the part of the program where the variable is visible. Variables have a limited scope. Two variables with the same name can be declared in different scopes. The scope of global variables is the entire program. The scope of local variables is limited to the function in which they are declared. The scope of a variable is determined by its location in the program text.

* lets understand with an example

    ```c++
    #include<iostream>
    using namespace std;
    int x = 10;
    int main(){
        int x = 20;
        {
            int x = 30;
            cout<<x<<endl;
        }
        cout<<x<<endl;
        cout<<::x<<endl;
        return 0;
    }
    ```

* The output of the above code is
    ```c++
    30
    20
    10
    ```
* The scope resolution operator (::) is used to refer to the global variable. It is used to tell the compiler that the variable that follows the operator (::) is a global variable.

* Lets take another example

    ```c++
    #include<iostream>
    using namespace std;
    int global = 10;
    void inner(){
        global++;
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
    ```
* The output of the above code is
    ```c++
    10
    11
    21
    11

    // explaination: in the main func the global variable is printed 10, local() is called and inner() is called and global variable increase by 1 and printed 11, inner() is terminated and in local() `int global` is declared and initialized with 20 and printed 21, local() is terminated and in main() global variable is printed 11.
    ```
