#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N;
    int nextDiff;
    vector<int> v;
    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        v.push_back(Pi);    
    }
    if (v.size() < 2)
        return 0;
    sort(v.begin(), v.end());
    int min = v.at(1) - v.at(0);
    for (int i = 1; i < v.size(); i++)
    {
        nextDiff = v.at(i) - v.at(i - 1);
        if (min > nextDiff)
            min = nextDiff;
    }
    cout << min << endl;
}
