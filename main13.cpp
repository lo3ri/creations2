#include <iostream>
using namespace std;
 void relationalOperation(string s1, string s2)
{
 
    if (s1 != s2) 
    {
        cout << s1 << " is not equal to " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " is greater than " << s2 << endl;
        else
            cout << s2 << " is greater than " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}
 
// Driver code
int main()
{
    string s1("Geeks");
    string s2("ForGeeks");
    relationalOperation("Geeks", "Geeks");
    string s3("Geeks");
    string s4("geeks");
    relationalOperation("Geeks", "ForGeeks");
    return 0;
}