#include <iostream>
#include <vector>

using namespace std;




void start_text( vector <string> &choices);
void A(int &New_Value);
void P(vector <int> &vecP);
void S(vector <int> vecP);
void L(vector <int> vecP);


void start_text( vector <string> &choices)
{
    for (int i = 0; i< choices.size(); i++)
    {
        cout << choices.at(i) << endl;
    }
}
void A(int& New_Value)
{
    vector <int> vecP{ 3,1,6,8,5 };
    vecP.push_back(New_Value);
    for (int i = 0; i < vecP.size(); i++)
    {
        cout << vecP[i] << endl;
    }
}

void P(vector <int>& vecP)
{
    cout << "---------------------------------" << endl;
    cout << "Selected: showing array List " << endl;
    for (int i = 0; i < vecP.size(); i++)
    {
        cout << vecP[i] << endl;
    }
}

int M(int &median)
{
    const vector <int> vecP{ 3,1,6,8,5 };
    return median = vecP[0] + vecP[1] + vecP[2] + vecP[3] + vecP[4] / 4;    
}

void S(vector <int> vecP)
{
    int smallest_value{};
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

void L(vector <int> vecP)
{
    int smallest_value{};
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

int main()
{
   
    char menu{};
    vector <string> choices{ "P - Print numbers", "A - Add a number", "M - Average of elements", "S - Display the smalles number", "L - Display the largest number", "Q - Quit" };

    start_text(choices);

    cin >> menu;
    vector <int> vecP{ 3,1,6,8,5 };

    if (menu == 'P' || menu == 'p')
    {
        P(vecP);
    }
    else if (menu == 'A' || menu == 'a')
    {
        
        int New_Value{};
        cout << "Insert value" << endl;
        cin >> New_Value;
        cout << "---------------------------------------------------" << endl;
        A(New_Value);

    }
    else if (menu == 'M' || menu == 'm')
    {
        int median{};
        cout << M(median) << endl;
    }
    else if (menu == 'S' || menu == 's')
    {
        S(vecP);
    }
    else if (menu == 'L' || menu == 'l')
    {
        L(vecP);
    }
    else if (menu == 'Q' || menu == 'q')
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

