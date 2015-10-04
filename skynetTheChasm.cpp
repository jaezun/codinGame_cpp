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
    int road; // the length of the road before the gap.
    cin >> road; cin.ignore();
    int gap; // the length of the gap.
    cin >> gap; cin.ignore();
    int platform; // the length of the landing platform.
    cin >> platform; cin.ignore();

    // game loop
    while (1)
    {
        int speed; // the motorbike's speed.
        cin >> speed; cin.ignore();
        int coordX; // the position on the road of the motorbike.
        cin >> coordX; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

/*      cerr << "road: " << road << endl;
        cerr << "gap: " << gap << endl;
        cerr << "platform: " << platform << endl;
        cerr << "speed: " << speed << endl;
        cerr << "coordX: " << coordX << endl;
*/
        if (coordX < road - 1)
        {
            if (speed < gap + 1)
            {
                cout << "SPEED" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
            }
            else if (speed > gap + 1)
            {
                cout << "SLOW" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
            }
            else if (speed == gap + 1)
            {
                cout << "WAIT" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
            }
        }
        else if (coordX == road - 1)
            cout << "JUMP" << endl; // A single line containing one of 4 keywords: SPEED, SLOW, JUMP, WAIT.
        else if (coordX >= road + gap)
        {
            cout << "SLOW" << endl;
        }
 
    }
}
