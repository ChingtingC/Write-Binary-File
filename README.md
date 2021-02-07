# WriteBinaryFile
Some simple tools to generate binary files easily


## generate matrix for WarpAffine

### Usage: 

compile generate_warpAffine_matrix.cpp

then ./a.out a00 a01 a02 a10 a11 a12 output_file.bin

```
g++ generate_warpAffine_matrix.cpp -o generate_warpAffine_matrix
./generate_warpAffine_matrix 1 0 -0.5 0 -1 0.5 matrix.bin
```

## generate matrix for WarpPerspective

### Usage: 

compile generate_warpPerspective_matrix.cpp

then ./a.out a00 a01 a02 a10 a11 a12 a20 a21 a22 output_file.bin

```
g++ generate_warpPerspective_matrix.cpp -o generate_warpPerspective_matrix
./generate_warpPerspective_matrix 1 0 -0.5 0 -1 0.5 2 -1.5 2 matrix.bin
```

### Note

TODO: wrtie a makefile

key phrases: C++, ofstream, write bin file, float array to bin, argc, argv, atof
