#include "sheet.h"

int main(int argc, char **argv) {
    int* dims = prompt();
    struct sheet s;
    memcpy(s.dim, dims, sizeof(dims));
    initialize(s);
    display(s);
    return 0;
}   