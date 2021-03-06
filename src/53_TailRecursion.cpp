#define TAIL_RECURSION 0
#if TAIL_RECURSION

#include <iostream>

static void fun_r(int n);
static void fun_i(int n);

int main(int argc, char *argv[])
{
    fun_r(atoi(argv[1]));
    fun_i(atoi(argv[1]));
    return 0;
}

void fun_r(int n)
{
    if (n > 0)
    {
        std::cout << n << "\n";
        fun_r(n - 1);
    }
}

void fun_i(int n)
{
    while (n > 0)
    {
        std::cout << n << "\n";
        --n;
    }
}

#endif