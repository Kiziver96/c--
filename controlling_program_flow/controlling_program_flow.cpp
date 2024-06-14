#include <iostream>
#include <vector>

using namespace std;

char menu{};
vector <int> vecP { 3,1,6,8,5 };
int New_Value{};
int smallest_value{};


int main()
{
    
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Average of elements" << endl;
    cout << "S - Display the smalles number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;

    cin >> menu;


    if (menu == 'P' || menu == 'p')
    {
        cout << "Selected: showing array List " << endl;


        for (int i = 0; i<5; i++ )
        {
            cout << vecP[i] << endl;

        }
    }
    else if (menu == 'A' || menu == 'a')
    {
        cout << "Instert value" << endl;
        cin >> New_Value;
        cout << "---------------------------------------------------" << endl;
        vecP.push_back(New_Value);

        for (int i = 0; i < vecP.size(); i++)
        {
            cout << vecP[i] << endl;
        }

      
    }
    else if (menu == 'M' || menu == 'm')
    {
        int median{};
        median = vecP[0] + vecP[1] + vecP[2] + vecP[3] + vecP[4] / 4;
        cout << "Avarage number" << median << endl;
    }
    else if (menu == 'S' || menu == 's')
    {
        smallest_value = vecP[0];
        for (int i = 0; i < vecP.size(); i++)
        {
            if (smallest_value > vecP[i])
            {
                smallest_value = vecP[i];
            }
        }

        cout << "Smallest element is: " << smallest_value << endl;
    }
    else if (menu == 'L' || menu == 'l')
    {
        smallest_value = vecP[0];
        for (int i = 0; i < vecP.size(); i++)
        {
            if (smallest_value < vecP[i])
            {
                smallest_value = vecP[i];
            }
        }

        cout << "Largest element is: " << smallest_value << endl;
    }
    else if (menu == 'Q' || menu ==  'q')
    {
        cout << "Goodbye" << endl;
        exit(1);
    }
    else
    {
        cout << "Invalid value" << endl;
    }









    return 0;


}

