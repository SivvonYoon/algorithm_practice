#include <vector>
#include <iostream>

int main()
{
    std::vector<int> nums{0,1,2,3,4};
    nums.emplace_back(5);

    // for(std::size_t idx=0; idx<nums.size() ; idx++)
    // {
    //     std::cout << nums[idx] << std::endl;
    // }

    // for(auto itr = nums.begin() ; itr!=nums.end() ; itr++)
    // {
    //     std::cout << (*itr) << std::endl;
    // }

    for(const int & num : nums)
    {
        std::cout << num << std::endl;
    }
}