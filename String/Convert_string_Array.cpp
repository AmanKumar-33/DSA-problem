// writing an code for converting an array into string.

                            // using to_string() function

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// main function
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    string str = "";
    for(int i =0;i<n;i++){
        str= str + to_string(arr[i]);
    }

    cout<<str<<endl;
    return 0;

}


                    //    using stringstream

// main function
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    string s ="";
    for(int i =0;i<n;i++){
        stringstream ss;
        ss<<arr[i];
        s += ss.str();
        
    }

    // string str = ss.str();
    cout<<s<<endl;
    return 0;

}

                    // using boost library