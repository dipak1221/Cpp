#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(10, 5); //initializing size 10 with 5
    //here index data type is int and 1st value is size and default value is 2nd parameter so this is the way single vector is define with default value
    //define 2D vector 10 x 20

    vector<vector<int>> vec(10, /* so here data type is single vector here we have to define which value do we want in index as it is a vector in vector so element is single vector so here we have to define the same as we define single vector with default value*/ vector<int>(20, 5));

    vector<int> mm;
    vec.push_back(mm);
    vec.push_back(vector<int>(20, 0));
    // 2d vector are dynamic in rows and columns

    // define arrays of vector
    int arr[4];          //arrays of int
    vector<int> arr1[4]; //arrays of vector
    // arrays of vector are dynamic in columns only

    vector<vector<vector<int>>> arr5(10, vector<vector<int>>(20, vector<int>(30)));

    return 0;
}