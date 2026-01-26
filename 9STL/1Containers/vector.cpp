// Learning About Vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creation of vector
    vector<int> marks;

    // insertion of values in vector
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    // printing size of vector
    cout << "Size of the vector is : " << marks.size() << endl;

    // removing an element form vector
    marks.pop_back(); // last element will be removed
    cout << "Size of the vector after removing an element is : " << marks.size() << endl;

    // frront() and back() implementation
    cout << marks.front() << endl; // return the first element
    cout << marks.back() << endl;  // return the last element

    // empty()
    if (marks.empty() == true)
    {
        cout << "vector is Empty" << endl; // will return true if vector is empty
    }
    else
    {
        cout << "vector is not empty" << endl;
    }

    // Accessing Vector element by [index]
    cout << "elemenet at index 2 is: " << marks[2] << endl;
    // Accessing Vector element using at()
    cout << "elemenet at index 2 is: " << marks.at(2) << endl;

    // capacity
    cout << "vector capacity is: " << marks.capacity() << endl; // returns Number of blocks allocated

    // if we add two more elements >>Vector Array capacity doubles from previsous capacity of 4
    marks.push_back(50);
    marks.push_back(60);
    cout << "vector new capacity is: " << marks.capacity() << endl;

    // printing New size
    cout << "New Size of the vector is : " << marks.size() << endl; // number of elements inserted

    // reserve()
    //  marks.reserve(10)// it will reseve minimum 10 blocks capacitu for the vector

    // max_size() //returns max size of the vector can be created by system
    cout << "max size of the vector can be created is : " << marks.max_size() << endl;

    // delete all elements of the vector
    //  marks.clear();
    //  cout<<"New Size of the vector is : "<< marks.size()<<endl; //will return 0 as all elements removed

    // insert()
    marks.insert(marks.begin(), 50); // will insert (50) at starting of the vector
    cout << "New First Element: " << marks[0] << endl;
    cout << "New Size of the vector is : " << marks.size() << endl; // number of elements inserted

    // erase() // will erase the elemets within the limits as paramenetrs
    //  marks.erase(marks.begin(), marks.end());
    //  cout<<"New Size of the vector is : "<< marks.size()<<endl; //will return 0 as all elements erased



    // using swap()
    vector<int> first;

    //vector first
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    //vector second
    vector<int> second;
    second.push_back(10);
    second.push_back(20);
    second.push_back(30);
    second.push_back(40);

    //swapping
    first.swap(second); // using swap function to swap vector first with vector second

    cout << "Vector First now : ";
    for (int i : first)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Vector second now : ";
    for (int i : second)
    {
        cout << i << " ";
    }
    cout << endl;


    //****traversing a vector using iterator ***********

    // creating an interator
    vector<int>::iterator it = first.begin(); //  iterator 'it' is at first element of the vector 'first'

    cout << "Printing Vector 'first' using iterator : ";
    while (it != first.end())
    { // it will traverse till end of the vector
        cout << *it << " ";
        it++;
    }
    cout << endl;



    // *******2D Vector Creation***********
    vector<vector<int>> arr(5, vector<int>(4, 0)); // 2d array with 4 rows and 4 col with intial values as 0 for each cell.
    int total_rows = arr.size();
    int total_col = arr[0].size();

    cout << "2D vector rows is: " << total_rows << " and columns are: " << total_col << endl;

    // 2D array vector with different column size for rows.
    vector<vector<int>> brr(4); // 2d array with 4 rows.
    arr[0] = vector<int>(5);    // 1st row 5 coumns
    arr[1] = vector<int>(2);    // 2nd row with 2 coumns
    arr[2] = vector<int>(3);    // 3rd row with 3 columns
    arr[3] = vector<int>(1);    // 4th row with 1 coumn





    
    // creation with size
    // vector<int> miles[20]; // will create a vector names miles with size 20.

    // // creating vector with the initialization
    // vector<int> distances(15, 0); // will create vector named distances with size 15 and 0 in all indexes.

    // cout<<*(marks.begin())<<endl; // returns first element of vector
}
