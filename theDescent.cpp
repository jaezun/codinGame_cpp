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
    vector<int> v;
    int max = 0;
    int maxPos = 0;    

    // game loop
    while (1)
    {
        int spaceX;
        int spaceY;

  /*      cerr << "max: " << max << endl;
        cerr << "maxPos: " << maxPos << endl;
        cerr << "spaceX: " << spaceX << endl;
        cerr << "spaceY: " << spaceY << endl;
*/
        cin >> spaceX >> spaceY; cin.ignore();
        v.clear();
 
        for (int i = 0; i < 8; i++)
        {
            int mountainH; // represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
            cin >> mountainH; cin.ignore();
            v.push_back(mountainH);
        }
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        {
            if (*it > max)
            {
                max = *it;
                maxPos =  it - v.begin();
            }
        }
        if (spaceX == maxPos)
        {
            cout << "FIRE" << endl;
            max = 0;
            maxPos = 0;
        }
        else
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
            cout << "HOLD" << endl; // either:  FIRE (ship is firing its phase cannons) or HOLD (ship is not firing).
    }
}
