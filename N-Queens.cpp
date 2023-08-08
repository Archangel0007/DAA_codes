#include<iostream>
#include<cmath>
using namespace std;

int x[] = {0, 0, 0, 0};

bool place(int k, int i)
{
    for (int j = 1; j < k; j++)
    {
        if (((x[j] - i) == 0) || (abs(x[j] - i) == abs(j - k))) {
            return false;
        }
    }
    return true;
}

void nqueens(int k, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (place(k, i))
        {
            x[k] = i;
            if (k == n)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << x[j] << " ";
                }
                cout << endl;
            }
            else
            {
                nqueens(k + 1, n);
            }
        }
    }
}

int main()
{
    int noofqueens = 4;
    nqueens(1, noofqueens);  // Start with k = 1 instead of k = 0
    return 0;
}
