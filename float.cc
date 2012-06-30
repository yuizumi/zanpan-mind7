#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
    if (argc != 2) {
        fprintf(stderr, "Invalid number of arguments.\n");
        return 1;
    }

    if (strchr(argv[1], '.')) {
        float f = atof(argv[1]);
        int n = *((int*) &f);
        printf("%08x (%d)\n", n, n);
    } else {
        int n = atoi(argv[1]);
        printf("%g\n", *((float*) &n));
    }

    return 0;
}
