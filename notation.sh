 #!/bin/bash

NOTE=0
echo "Note : ${NOTE}/20"

# Test compilation
compilation=`g++ -Wall -Werror -o myniceprogram main.cpp new/Helper.cpp new/Identitee.cpp`
status=$?
if [[ ${status} -ne 0 ]]; then
    echo "Build failed"
    exit
fi

# Test makefile
maketest=`make compile`
status=$?
if [[ ${status} -eq 2 ]]; then
    echo "Build recipe failed"
    exit
fi

maketest=`make run`
status=$?
if [[ ${status} -eq 2 ]]; then
    echo "Run recipe failed"
    exit
fi

maketest=`make valgrind`
status=$?
if [[ ${status} -eq 2 ]]; then
    echo "Valgrind recipe failed"
    exit
fi

NOTE=$[NOTE+5]
echo "Note : ${NOTE}/20"

