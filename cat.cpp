#include <iostream>
#include <vector>

class Cat{
public : 
    Cat(std::string name, int age):mName{std::move(name)},mAge{age} {}
    void speak() const
    {
        std::cout << "meow " << mName << " " << mAge << std::endl;
    }
private:
    std::string mName;
    int mAge;
};

int main()
{
    std::vector<Cat> cats;

    cats.emplace_back("CHAPSSAL",0);       // cats.emplace_back(Cat{"CHAPSSAL",0});
    cats.emplace_back("MOZZI",1);          // cats.emplace_back(Cat{"MOZZI",1});

    Cat& cat = cats.emplace_back("Kitty",2);   // 이 방식이 cats.emplace_back(Cat{"Kitty",2}); 보다 더 적은 동작으로 같은 기능을 수행함. (단 c++17 이어야 함.)
    // 이 부분 때문에 빌드할 때 g++ cat.cpp -std=c++17 과 같이 해야 함. (std=c++17 옵션을 넣어준 것.)

    Cat nabi{"nabi",3};
    cats.emplace_back(std::move(nabi));        // R value --> move

    for (const auto& cat : cats)
    {
        cat.speak();
    }
}
