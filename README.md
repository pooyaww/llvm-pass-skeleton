# llvm-pass-skeleton

A completely useless LLVM pass.
Both function pass (master) and Runtime library (on branch) tetsed with LLVM 8.

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
