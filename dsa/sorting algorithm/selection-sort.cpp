#include <iostream>
#include <vector>

void selected_sort(std::vector<int> &list)
{

    for (int i = 0; i < list.size() - 1; i++)
    {
        int current_minimum = i;

        for (int j = i + 1; j < list.size(); j++)
        {
            if (list[j] < list[current_minimum])
            {
                current_minimum = j;
            }
        }

        std::swap(list[i], list[current_minimum]);
    }
}

void print_list(std::vector<int> &list)
{
    for (int i = 0; i < list.size(); i++)
    {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> n{45, -10, 23, 45, -70, 100, 0, -5, 23, 67, -70, 89, 45, 23, -10, 67, 100};
    print_list(n); // Before sorting
    selected_sort(n);
    print_list(n); // After sorting
    return 0;
}