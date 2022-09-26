#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
#include <vector>
using namespace std;


void Options();

vector<vector<int>> FillZeroes(int width, int height);

vector<vector<int>> FillCin(int width, int height);

vector<vector<int>> FillRandomly(int width, int height);

void PrintArray(vector<vector<int>> ar, int width, int height);

int ArraySum(vector<vector<int>> ar, int width, int height);

int ArrayMax(vector<vector<int>> ar, int width, int height);

int ArrayMin(vector<vector<int>> ar, int width, int height);

int ArrayMean(vector<vector<int>> ar, int width, int height);


void Options()
{
    srand((unsigned int)time(0));
}

vector<vector<int>> FillZeroes(int width, int height)
{
    vector<vector<int>> ar;
    for (int y = 0; y < height; y++)
    {
        vector<int> row;
        for (int x = 0; x < width; x++)
        {
            row.push_back(0);
        }
        ar.push_back(row);
    }
    return ar;
}

vector<vector<int>> FillCin(int width, int height)
{
    vector<vector<int>> ar;
    for (int y = 0; y < height; y++)
    {
        vector<int> row;
        for (int x = 0; x < width; x++)
        {
            int temp;
            cout << "Enter a number [" << y << "/" << height << "][" << x << "/" << width << "]: ";
            cin >> temp;
            row.push_back(temp);
        }
        ar.push_back(row);
    }
    return ar;
}

vector<vector<int>> FillRandomly(int width, int height)
{
    vector<vector<int>> ar;
    for (int y = 0; y < height; y++)
    {
        vector<int> row;
        for (int x = 0; x < width; x++)
        {
            row.push_back(rand());
        }
        ar.push_back(row);
    }
    return ar;
}

void PrintArray(vector<vector<int>> ar, int width, int height)
{
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            cout << ar[y][x] << "\t";
        }
        cout << "\n";
    }
}

int ArraySum(vector<vector<int>> ar, int width, int height)
{
    int sum = 0;
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            sum += ar[y][x];
        }
    }
    return sum;
}

int ArrayMax(vector<vector<int>> ar, int width, int height)
{
    int max = ar[0][0];
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            if (max < ar[y][x])
            {
                max = ar[y][x];
            }
        }
    }
    return max;
}

int ArrayMin(vector<vector<int>> ar, int width, int height)
{
    int min = ar[0][0];
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            if (min > ar[y][x])
            {
                min = ar[y][x];
            }
        }
    }
    return min;
}

int ArrayMean(vector<vector<int>> ar, int width, int height)
{
    int sum = ArraySum(ar, width, height);
    return round(sum / (width * height));
}