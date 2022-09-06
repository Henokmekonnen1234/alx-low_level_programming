#!/bin/bash
wget -P /tmp https://github.com/Henokmekonnen1234/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD=/tmp/libinject.so
