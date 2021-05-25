#include <iostream>
#include <vector>

void readFloatVector(std::vector<float> v)
{
    if (v.empty()) std::cout << "Vector is empty!\n";

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}

void readIntVector(std::vector<int> v)
{
    if (v.empty()) std::cout << "Vector is empty!\n";

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}

float getSumPrice(std::vector<float> prices, std::vector<int> indexes)
{
    if (prices.empty())
    {
        std::cout << "Prices list is empty!\n";
        return 0.0f;
    }

    if (indexes.empty())
    {
        std::cout << "Indexes list is empty!\n";
        return 0.0f;
    }

    float sumPrice = 0;
    for (int i = 0; i < indexes.size(); i++)
    {
        int index = indexes[i];
        if (index >= 0 && index < prices.size())
            sumPrice += prices[index];
        else
            std::cout << "Index " << i << " is out of prices range.\n";
    }
    return sumPrice;
}


int main() {

    std::vector<float> prices = {10.0f, 12.5f, 14.0f, 17.5f, 5.0f};
    std::vector<int> indexes = {1, 1, 0, 3, 4};

    std::cout << "Prices vector is:\n";
    readFloatVector(prices);

    std::cout << "Indexes vector is:\n";
    readIntVector(indexes);

    std::cout << "----------------------\n";
    std::cout << "Price sum of goods under chosen indexes is: \n";
    std::cout << getSumPrice(prices, indexes) << "\n";

    return 0;
}
