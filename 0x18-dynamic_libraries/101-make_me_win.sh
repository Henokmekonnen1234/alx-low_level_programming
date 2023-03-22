#!/bin/bash
wget -P /tmp https://github.com/kalbetre-alx/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lib_rand.so
export LD_PRELOAD=/tmp/lib_rand.so
