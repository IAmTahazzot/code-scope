#include <iostream>
#include <vector>

std::vector<int> bubble_sort(std::vector<int> list)
{
    bool swapped = false;

    do
    {
        swapped = false;
        for (int i = 0; i < list.size() - 1; i++)
        {
            if (list[i] > list[i + 1])
            {
                std::swap(list[i], list[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);

    return list;
}

void print_list(std::vector<int> list)
{
    std::cout << "sorted list: [";
    for (int i = 0; i < list.size(); i++)
    {
        if (list.size() - 1 == i)
        {
            std::cout << list[i];
            continue;
        }

        std::cout << list[i] << ", ";
    }
    std::cout << "]";
}

int main()
{
    std::vector<int> somenumbers{3, 4, 5, 1, 0, 8, 10, 2, 4, 2, 2, 9, 7, 5};
    std::vector<int> sorted = bubble_sort(somenumbers);

    print_list(sorted);

    return 0;
}
