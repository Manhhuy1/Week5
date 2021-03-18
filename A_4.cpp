#include <iostream>
using namespace std;
void f_(int x[])
{
    for (int i = 0; i < 5; i++) cout << &x[i] << " ";
    cout << endl;
}
void s_(string s)
{
    cout << &s << endl;
}
int main()
{
    int a[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++) cout << &a[i] << " ";
    cout << endl;
    string s;
    f_(a);
    cout << &s << endl;
    s_(s);
    return 0;
}