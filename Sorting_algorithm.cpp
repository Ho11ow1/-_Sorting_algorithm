#include "./sort.h"
#include <iostream>

void vector()
{
    std::vector<uint32_t> nums = { 1, 7, 3, 8, 2 };

    std::vector<uint32_t> sorted = Hollow::vector_sort::sort(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        printf("%d%s", sorted[i], " ");
    }
}

void type()
{
    char arr[] = { 'a', 'c', 'b', 'f', 'd' };

    int size = sizeof(arr) / sizeof(arr[0]);

    Hollow::type_sort::sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    vector();

    printf("%s", "\n\n");

    type();

    return 0;
}