#!/bin/bash
wget -P /tmp https://github.com/Mub2023/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libmyfile.so
export LD_PRELOAD=/tmp/libmyfile.so
