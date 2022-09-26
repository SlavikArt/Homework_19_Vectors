#include "Slavik.h"
// Все методы находятся в моей библиотеке "Slavik.h"

int main()
{
    Options();

    int width = 4;
    int height = 4;

    vector<vector<int>> ar_1;
    vector<vector<int>> ar_2;
    vector<vector<int>> ar_3;
    
    ar_1 = FillCin(width, height);

    ar_2 = FillZeroes(width, height);

    ar_3 = FillRandomly(width, height);

    cout << "\nFill Cin:\n";

    PrintArray(ar_1, width, height);

    cout << "\nFill Zeroes:\n";

    PrintArray(ar_2, width, height);

    cout << "\nFill Randomly:\n";

    PrintArray(ar_3, width, height);

    cout << "\n";

    cout << "Array 1 Max: " << ArrayMax(ar_1, width, height) << "\n";

    cout << "Array 1 Min: " << ArrayMin(ar_1, width, height) << "\n";

    cout << "Array 1 Mean: " << ArrayMean(ar_1, width, height) << "\n";
}