#!/bin/bash
wget -P ../ https://github.com/Relaxforever/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/killerqueen.so
export LD_PRELOAD=../killerqueen.so
