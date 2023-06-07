// #include <iostream>

// using namespace std;

// class Tetris
// {
// public:
//     Tetris(int rows, int cols, int left, int top, int blockSize);
//     void Init(); //初始化
//     void Play(); //开始游戏
// };

// class Block
// {
// public:
//     Block();
//     void Drop();
//     void MoveLeftRight(int offset);
//     void Reset(); //旋转
//     void Draw(int leftMargin, int topMargin);
// };

// int main(int argc, char)
// {
//     Tetris game(20,10,160,);

// }

#include <iostream>
#include <Windows.h>

using namespace std;

wstring tetromino[7];
int nFieldWidth = 12;
int nFieldHeight = 18;
int nScreenWidth = 80;
int nScreenHeight = 30;
unsigned char *pField = nullptr;

// 旋转函数
int Rotate(int px, int py, int r)
{
    switch (r % 4)
    {
    case 0:
        return py * 4 + px; // 0 degrees
        break;
    case 1:
        return 12 + py - (px * 4); // 90 degrees
        break;
    case 2:
        return 15 - (py * 4) - px; // 180 degrees
        break;
    case 3:
        return 3 - py + (py * 4); // 270 degrees
        break;
    default:
        break;
    }

    return 0;
}

int main()
{
    // Create assets
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");
    tetromino[0].append(L"..X.");

    tetromino[1].append(L"..X.");
    tetromino[1].append(L".XX.");
    tetromino[1].append(L".X..");
    tetromino[1].append(L"....");

    tetromino[2].append(L".X..");
    tetromino[2].append(L".XX.");
    tetromino[2].append(L"..X.");
    tetromino[2].append(L"....");

    tetromino[3].append(L"....");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L".XX.");
    tetromino[3].append(L"....");

    tetromino[4].append(L"..X.");
    tetromino[4].append(L".XX.");
    tetromino[4].append(L"..X.");
    tetromino[4].append(L"....");

    tetromino[5].append(L"....");
    tetromino[5].append(L".XX.");
    tetromino[5].append(L"..X.");
    tetromino[5].append(L"..X.");

    tetromino[6].append(L"....");
    tetromino[6].append(L".XX.");
    tetromino[6].append(L".X..");
    tetromino[6].append(L".X..");

    pField = new unsigned char[nFieldWidth * nFieldHeight];
    for (int x = 0; x < nFieldWidth; x++)
    {
        for (int y = 0; y < nFieldHeight; y++)
        {
            pField[y * nFieldWidth + x] = (x == 0 || x == nFieldWidth - 1 || y == nFieldHeight - 1) ? 9 : 0;
        }
    }

    wchar_t *screen = new wchar_t[nFieldWidth * nFieldHeight];
    for (int i = 0; i < nScreenWidth * nScreenHeight; i++)
        screen[i] = L' ';
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwBytrsWritten = 0;

    bool bGameOver = false;
    while (!bGameOver)
    {
        // Draw Field
        for (int x = 0; x < nFieldWidth; x++)
        {
            for (int y = 0; y < nFieldHeight; y++)
            {
                screen[(y + 2) *nScreenWidth + (x + 2)] = L" ABCDEFG=#"[pField[y * nFieldWidth + x]];
            }
        }
        // Display Frame
        WriteConsoleOutputCharacter(hConsole, (LPCSTR)screen, nScreenWidth * nScreenHeight, {0, 0}, &dwBytrsWritten);
    }

    return 0;
}