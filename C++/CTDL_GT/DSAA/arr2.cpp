#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] * a[i];
        cout << a[i] << " ";
    }
    
    return 0;
}