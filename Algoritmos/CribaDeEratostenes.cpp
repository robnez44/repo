#include <iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    for (int i = 2 ; i < n; i++)
    { 
        if ((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0))
        {
            cout << i << endl;
        }
    }
    
    return 0;
}