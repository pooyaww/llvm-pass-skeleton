# llvm-pass-skeleton

A completely useless LLVM pass.
It's for LLVM 3.8. --> gonna be updated for llvm 10

Build:

    $ cd llvm-pass-skeleton
    $ mkdir build
    $ cd build
    $ cmake ..
    $ make
    $ cd ..

Run:

    $ clang -Xclang -load -Xclang build/skeleton/libSkeletonPass.* something.c

Tutorial: http://www.cs.cornell.edu/~asampson/blog/llvm.html
