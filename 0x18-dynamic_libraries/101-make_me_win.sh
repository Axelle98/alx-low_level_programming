#!/bin/bash
wget -q -O /tmp/libtest.so https://github.com/Axelle98/alx-low_level_programming/raw/master/0x17-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
