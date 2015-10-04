#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    if (n == 0)
    {
        cout << 0 << endl;   
        return 0;
    }
    string temps; // the n temperatures expressed as integers ranging from -273 to 5526
    getline(cin, temps);
  
    stringstream tempsStream(temps);
    int num;
    vector<int> numbers;
    
    while (tempsStream >> num)
    {
        numbers.push_back(num);
    }
  
    int res;
    res = numbers.front();
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        if (res == *it)
            res = *it;
        else if ((abs(res) == abs(*it)) && *it > 0)
            res = *it;
        else if (abs(res) > abs(*it))
            res = *it;
    }
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << res << endl;
    
    return 0;
}
