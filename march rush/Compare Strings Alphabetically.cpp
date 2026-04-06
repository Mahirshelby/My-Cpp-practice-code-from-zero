#include <iostream>

using namespace std;

int main  ( )
{
    string s1 = "Hello world";
    string s2 = "Hello world";
    string s3 = "Hello";
    string s4 = "Hello world, What's Up?";



    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;
    cout << "String 3: " << s3 << endl;
    cout << "String 4: " << s4 << endl;
    // compare the strings
    cout <<"Comparing String 1 and String 2: "  <<s1.compare(s2) << " (Equal)" <<endl;
    cout <<"Comparing String 1 and String 3: " << s1.compare(s3) << " (String 1 is Longer)" << endl;
    cout <<"Comparing String 1 and String 4: " << s1.compare(s4) <<" (String 1 is Smaller)" << endl;

    return 0;
}


