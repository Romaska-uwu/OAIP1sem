#include <iostream>

unsigned count_of(const char* s, unsigned n, bool (*cmp)(int c)) {
    unsigned m = 0, i = 0;
    do {
        if ((*cmp)(*s) && *s)
            ++i;
        else if (i > 0) {
            if (i == n)
                ++m;
            i = 0;
        }
    } while (*s++ != '\0');
    return m;
}

bool _cmp(int c) { return (c == '0' || c == '1'); }

int main(void) {
    char s[] = "11010 10 11111, 1010, 10111";
    std::cout << "count: " << count_of(s, 5, &_cmp) << std::endl;
    return 0;
}