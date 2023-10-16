#!/bin/bash
wget -P /work https://github.com/moabdelmoneam10/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/work/libgiga.so
