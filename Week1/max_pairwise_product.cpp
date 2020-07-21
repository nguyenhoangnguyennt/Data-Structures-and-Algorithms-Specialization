#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include<list>
#include<limits>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (size_t i = 1; i <= n; i++) {
        cin >> arr[i-1];
    }
    cout << endl;
    sort(arr.begin(), arr.end());
    //for (int i = 1; i <= n; i++) {
    //    cout<< arr[i-1]<<" ";
    //}
    cout << arr[n - 1] * arr[n - 2];
}

