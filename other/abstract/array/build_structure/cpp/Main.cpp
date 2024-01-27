#include <iostream>

#include "Array.h"
#include "Vector.h"

template<typename T>
void PrintVector(const Vector<T>& vector)
{
    for (size_t i = 0; i < vector.Size(); i++)
        std::cout << vector[i] << '\n';

    std::cout << "------------------------------\n";
}

int main()
{
    Array<std::string, 2> data;
    data[0] = "Zaq";
    data [1] = "C++";

    Vector<std::string> vector;
    vector.PushBack("Zaq");
    vector.PushBack("C++");
    vector.PushBack("Vector");
    vector.PushBack("Vector");
    vector.PushBack("Vector");
    vector.PushBack("Vector");
    vector.PushBack("Vector");
    vector.PushBack("Vector");

    PrintVector(vector);

    std::cin.get();
}