#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int q;
    cin>>q;
    for(int w=0;w<q;w++){
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        int points[] = {x1, x2, x3};
        sort(points, points + 3);
        int median = points[1];
        int f_a = abs(median - x1) + abs(median - x2) + abs(median - x3);
        cout << f_a << endl;
    }
    return 0;
}
