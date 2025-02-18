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
                int temp = list[i + 1];

                list[i + 1] = list[i];
                list[i] = temp;
                swapped = true;
            }
        }
    } while (swapped);

    return list;
}

int main()
{
    std::vector<int> somenumbers{3, 4, 5, 1, 0, 8, 10, 2, 4, 2, 2, 9, 7, 5};
    std::vector<int> sorted = bubble_sort(somenumbers);

    std::cout << "sorted list: [";
    for (int i = 0; i < sorted.size(); i++)
    {
        if (sorted.size() - 1 == i)
        {
            std::cout << sorted[i];
            continue;
        }

        std::cout << sorted[i] << ", ";
    }
    std::cout << "]";

    return 0;
}