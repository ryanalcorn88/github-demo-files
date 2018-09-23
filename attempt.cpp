/*
* Created by: Ryan Alcorn
* Description: This file allows the user to navigate a maze
* using symbols chosen by the user.
*/

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    string direction;
    int a = 2;
    int b = 0;
    //builds the maze with a 12 by 12 array
    char maze[12][12] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
                         {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
                         {'X', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
                         {'#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
                         {'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'},
                         {'#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
                         {'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
                         {'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
                         {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
                         {'#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
                         {'#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
                         {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}};
    //displays the original maze
    cout << "The original maze..." << endl;
    cout << endl;
    for(int y = 0; y < 12; ++y)
    {
        for(int x = 0; x < 12; ++x)
        {
            cout << maze[y][x] << " ";
        }
        cout << endl;
    }

    cout << endl;
    //begins a while loop that continues until the maze is completed
    while(maze[4][11] != 'X')
    {
        cout << "What direction did you want to move in?(up, down, left, right)" << endl;
        cin >> direction;
        cout << endl;

        while (direction != "left" && direction != "right" && direction != "up" && direction != "down")
        {
            cout << "You have entered an incorrect direction. Please enter either up, down, left, or right." << endl;
            cin >> direction;
            cout << endl;
        }

        //these four if's occur if an incorrect direction is chosen
        if(direction == "left" && maze[a][b - 1] != '.')
        {
            cout << "That is an illegal move. Please try again." << endl;
            cout << endl;
        }

        if(direction == "right" && maze[a][b + 1] != '.')
        {
            cout << "That is an illegal move. Please try again." << endl;
            cout << endl;
        }

        if(direction == "up" && maze[a - 1][b] != '.')
        {
            cout << "That is an illegal move. Please try again." << endl;
            cout << endl;
        }

        if(direction == "down" && maze[a + 1][b] != '.')
        {
            cout << "That is an illegal move. Please try again." << endl;
            cout << endl;
        }
        //these next four if's happen if a correct direction is chosen
        if(direction == "left" && maze[a][b - 1] == '.')
        {
            cout << "That is a legal move." << endl;
            maze[a][b - 1] = 'X';
            maze[a][b] = '.';
            b -= 1;

            cout << "The new maze..." << endl;
            cout << endl;
            for(int y = 0; y < 12; ++y)
            {
                for(int x = 0; x < 12; ++x)
                {
                    cout << maze[y][x] << " ";
                }
                    cout << endl;
            }
        }

        if(direction == "right" && maze[a][b + 1] == '.')
        {
            cout << "That is a legal move." << endl;
            maze[a][b + 1] = 'X';
            maze[a][b] = '.';
            b += 1;

            cout << "The new maze..." << endl;
            cout << endl;
            for(int y = 0; y < 12; ++y)
            {
                for(int x = 0; x < 12; ++x)
                {
                    cout << maze[y][x] << " ";
                }
                    cout << endl;
            }
        }

        if(direction == "up" && maze[a - 1][b] == '.')
        {
            cout << "That is a legal move." << endl;
            maze[a - 1][b] = 'X';
            maze[a][b] = '.';
            a -= 1;

            cout << "The new maze..." << endl;
            cout << endl;
            for(int y = 0; y < 12; ++y)
            {
                for(int x = 0; x < 12; ++x)
                {
                    cout << maze[y][x] << " ";
                }
                    cout << endl;
            }
        }

        if(direction == "down" && maze[a + 1][b] == '.')
        {
            cout << "That is a legal move." << endl;
            maze[a + 1][b] = 'X';
            maze[a][b] = '.';
            a += 1;

            cout << "The new maze..." << endl;
            cout << endl;
            for(int y = 0; y < 12; ++y)
            {
                for(int x = 0; x < 12; ++x)
                {
                    cout << maze[y][x] << " ";
                }
                    cout << endl;
            }
        }
    }

    cout << endl;
    cout << "Congratulations! You made it to the end of the maze!" << endl;
}
