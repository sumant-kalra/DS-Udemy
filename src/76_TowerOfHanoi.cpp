#define TOWER_OF_HANOI_MAIN 1
#if TOWER_OF_HANOI_MAIN

#include <iostream>

// Source Disk - A, Destination Disk - C using an intermediate disk - B
static void toh(int n, int A, int C, int B)
{
    if (n < 1)
    {
        std::cerr << "[ERROR] n must be greater than 0.\n";
        exit(-1);
    }

    if (n == 1)
    {
        std::cout << "Move the disk at the top from " << A << " to " << C << "\n";
        return;
    }

    toh(n - 1, A, B, C);
    toh(1, A, C, B); // Note that this can be removed and replaced by the code under condition n==1
    toh(n - 1, B, C, A);
}

int main(int argc, char const *argv[])
{
    toh(atoi(argv[1]), 1, 3, 2);

    return 0;
}

#endif
