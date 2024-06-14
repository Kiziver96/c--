// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*

void multiply_with_pointer(int* ptr, int multiplier)
{
    *ptr *= multiplier;   
}



int find_max_element(int* arr, int size) {
    //-- Write your code below this line 
    int array[] = { 12, 45, 67, 23, 9 };
    int temp{ 0 };
    for (size_t i =0; i <size; i++)
    {
      
      
        if (temp < array[i])
        {
            temp = array[i];
        }
        else
        {
            *arr = temp;
        }
    }

    return *arr;
    //-- Write your code below this line 
}

int main()
{
    int arr;
    int size{5};
    
    find_max_element(&arr, size);
    std::cout << arr << std::endl;

   
   

    return 0;
}
*/



 int* const applyarray1(int array1[], const size_t size1)
{
    int* new_storage{ nullptr };
    new_storage = new int[size1];
    for (size_t i = 0; i < size1; i++)
    {
        new_storage[i] = array1[i];
    }
    return new_storage;
}

int* const applyarray2(int array2[], const size_t size2)
{
    int* new_storage2{ nullptr };
    new_storage2 = new int[size2];
    for (size_t i = 0; i < size2; i++)
    {
        new_storage2[i] = array2[i];
    }
    return new_storage2;
}

int* applyarray3(const int* myarray1, int* myarray2,const size_t size1, const size_t size2)
{
    int* new_storage{ nullptr };
    new_storage = new int[size1 * size2];
    int tabpos = 0;

    for (size_t i = 0; i < size2; i++)
    {
        for (size_t j = 0; j < size1; j++)
        {
            new_storage[tabpos++] = myarray1[j] * myarray2[i];
        }
    }

    return new_storage;
}


int main()
{
   const size_t size1 = { 5 };
   const size_t size2 = { 3 };

    int array1[]{ 1, 2, 3, 4, 5 };
    int array2[]{ 10, 20, 30 };

    int* myarray1 = { nullptr };
    int* myarray2 = { nullptr };
    int* myarray3 = { nullptr };

    myarray1 = applyarray1(array1, size1);
    myarray2 = applyarray2(array2, size2);
    myarray3 = applyarray3(myarray1, myarray2, size1, size2);
    delete[] myarray1;
    delete[] myarray2;
    
    for (size_t i = 0; i < size1*size2; i++)
    {
        std::cout << myarray3[i] << std::endl;
    }
   
    delete[] myarray3;

    return 0;
}
