#include<iostream>
using namespace std;

int main()
{
    int i,c = 1;
    int even = 0;
    int odd = 0;
    while(c != 0)
    {
        cout << "Enter an integer: ";
        cin >> i;
        if(i != 0)
        {
            if(i%2 == 0)
            {
                even += 1;
            }
            else
            {
                odd += 1;
            }
        }
        c = i;
    }
    
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}
