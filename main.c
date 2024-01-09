#include "sheet.h"

int main(int argc, char **argv) {
    int* dims = prompt();
    struct sheet s;
    memcpy(s.dim, dims, sizeof(dims));
    printf("Rows: %d; Cols: %d\n", s.dim[0], s.dim[1]);
    return 0;
}   