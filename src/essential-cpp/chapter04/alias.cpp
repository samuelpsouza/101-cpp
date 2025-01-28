#include <iostream>
#include <format>
#include <cstdint>

using std::format;
using std::cout;
using std::endl;


typedef uint32_t points_t;
typedef uint64_t rank_t;

struct score {
    points_t p {};
    rank_t r {};
};

int main()
{
    score s {5, 1};
    cout << format("score s had {} points and a rank of {}", s.p, s.r) << endl;
    return 0;
}