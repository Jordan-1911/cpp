#include <array>
#include <iostream>

struct Foo
{
    int a{};
    int b{};
    int c{};
};

template<std::size_t SIZE>
consteval int sum(const std::array<int, SIZE>& a)
{
    int s{0};
    for (auto n : a)
        s += n;
    return s;
}

auto sum(auto x, auto y) -> decltype(x + y)
{
    return x + y;
}

int main()
{
    constexpr std::array<int, 3> a{3, 2, 1};
    constexpr int s{sum(a)};
    std::cout << s << '\n';

    Foo f1{.a = 1, .c = 3};
    std::cout << sum(f1.a, f1.c) << '\n';

    return 0;
}
