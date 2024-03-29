#include<iostream>

int main(){
    int arraySize, element, backup;
    std::cout << "Enter array size: ";
    std::cin >> arraySize;
    int myArray[arraySize];
    
    for (int i=0; i < arraySize; ++i){
        std::cout << "Enter integer element #" << i+1 << ": ";
        std::cin >> element;
        myArray[i] = element;
    }

    std::cout << "Sorting array using insertion sort ..." << std::endl;

    for (int i = 0; i < arraySize-1; ++i)
    {
        for (int j = i; j >= 0; --j)
        {
            if (myArray[j] > myArray[j+1])
            {
                backup = myArray[j];
                myArray[j] = myArray[j+1];
                myArray[j+1] = backup;
            }
            else break;
        }     
    }
    
    std::cout << "Sorted array: " << std::endl;

    for (int i : myArray){
        std::cout << i << " ";
    }

    system("pause");
    return 0;
}