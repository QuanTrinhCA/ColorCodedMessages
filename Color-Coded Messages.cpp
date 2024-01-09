#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
    vector < vector <int> > colors(17);
    //white
    colors[0].push_back(255);
    colors[0].push_back(255);
    colors[0].push_back(255);
    //blue
    colors[1].push_back(0);
    colors[1].push_back(0);
    colors[1].push_back(255);
    //fuchsia
    colors[2].push_back(255);
    colors[2].push_back(0);
    colors[2].push_back(255);
    //orange
    colors[3].push_back(255);
    colors[3].push_back(165);
    colors[3].push_back(0);
    //ultramarine
    colors[4].push_back(18);
    colors[4].push_back(10);
    colors[4].push_back(143);
    //crimson
    colors[5].push_back(220);
    colors[5].push_back(20);
    colors[5].push_back(60);
    //red
    colors[6].push_back(255);
    colors[6].push_back(0);
    colors[6].push_back(0);
    //yellow
    colors[7].push_back(255);
    colors[7].push_back(255);
    colors[7].push_back(0);
    //silver
    colors[8].push_back(192);
    colors[8].push_back(192);
    colors[8].push_back(192);
    //indigo
    colors[9].push_back(75);
    colors[9].push_back(0);
    colors[9].push_back(130);
    //hazel
    colors[10].push_back(165);
    colors[10].push_back(42);
    colors[10].push_back(42);
    //green
    colors[11].push_back(0);
    colors[11].push_back(255);
    colors[11].push_back(0);
    //aqua
    colors[12].push_back(0);
    colors[12].push_back(255);
    colors[12].push_back(255);
    //maroon
    colors[13].push_back(128);
    colors[13].push_back(0);
    colors[13].push_back(0);
    //emerald
    colors[14].push_back(80);
    colors[14].push_back(200);
    colors[14].push_back(120);
    //pink
    colors[15].push_back(255);
    colors[15].push_back(192);
    colors[15].push_back(203);
    //black
    colors[16].push_back(0);
    colors[16].push_back(0);
    colors[16].push_back(0);

    string strbuffer;

    cout << "Please enter the input:\n";
    getline(cin, strbuffer);

    vector < vector <int> > input(stoi(strbuffer) + 1);

    input[0].push_back(stoi(strbuffer));

    for (int i = 1; i <= input[0][0]; i++)
    {
        getline(cin, strbuffer);
        input[i].push_back(stoi(strbuffer.substr(0, strbuffer.find_first_of(" "))));
        input[i].push_back(stoi(strbuffer.substr(strbuffer.find_first_of(" "), strbuffer.find_last_of(" "))));
        input[i].push_back(stoi(strbuffer.substr(strbuffer.find_last_of(" "), strbuffer.size())));
    }

    strbuffer.~basic_string();

    for (int i = 1; i <= input[0][0]; i++)
    {
        for (int n = 0; n <= 16; n++)
        {
            if ((abs(colors[n][0] - input[i][0]) + abs(colors[n][1] - input[i][1]) + abs(colors[n][2] - input[i][2])) < 25)
                switch (n)
                {
                case 0:
                    cout << "w";
                    break;
                case 1:
                    cout << "b";
                    break;
                case 2:
                    cout << "f";
                    break;
                case 3:
                    cout << "o";
                    break;
                case 4:
                    cout << "u";
                    break;
                case 5:
                    cout << "c";
                    break;
                case 6:
                    cout << "r";
                    break;
                case 7:
                    cout << "y";
                    break;
                case 8:
                    cout << "s";
                    break;
                case 9:
                    cout << "i";
                    break;
                case 10:
                    cout << "h";
                    break;
                case 11:
                    cout << "g";
                    break;
                case 12:
                    cout << "a";
                    break;
                case 13:
                    cout << "m";
                    break;
                case 14:
                    cout << "e";
                    break;
                case 15:
                    cout << "p";
                    break;
                case 16:
                    cout << " ";
                    break;
                }
        }
    }

    colors.~vector();
    input.~vector();

    cout << "\nPress Enter to continue...";
    cin.get();

    return EXIT_SUCCESS;
}