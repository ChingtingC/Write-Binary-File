#include <stdlib.h>
#include <fstream>

int main(int argc, char* argv[]) {

    if (argc != 8) {
        printf("USAGE: ./a.out a00 a01 a02 a10 a11 a12 output_name.bin");
        return 1;
    }
    // TODO: add -h

    float ff;
    std::ofstream fout;
    fout.open(argv[7], std::ios::out | std::ios::binary);
    for (int i = 1; i < argc - 1; i++) {
       ff = atof(argv[i]);
       fout.write(reinterpret_cast<const char*>(&ff), sizeof(float));
    }
    fout.close();

    return 0;
}
