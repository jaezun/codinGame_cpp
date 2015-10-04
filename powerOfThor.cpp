#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    int thorX = initialTX;
    int thorY = initialTY;
    
    // game loop
    while (1)
    {
        int remainingTurns;
        cin >> remainingTurns; cin.ignore();

        string directionX = "";
        string directionY = "";
        
        if (thorX > lightX)    
        {
            directionX = 'W';
            thorX--;
        }
        else if (thorX < lightX)
        {
            directionX = 'E';
            thorX++;
        }
        if (thorY > lightY)
        {
            directionY = 'N';
            thorY--;
        }
        else if (thorY < lightY)
        {
            directionY = 'S';
            thorY++;
        }

        cout << directionY << directionX << endl; // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}
