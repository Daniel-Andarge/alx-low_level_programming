#!/bin/bash
wget -P .. https://github.com/Daniel-Andarge/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so?raw=true
export LD_PRELOAD="$PWD/../libgiga.so"
