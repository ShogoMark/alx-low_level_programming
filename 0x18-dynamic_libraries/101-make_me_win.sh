#!/bin/bash
wget -P /tm phttps://github.com/eyoul/alx-low_level_programming/raw/main/0x18-dynamic_libraries/iwin.so
rt LD_PRELOAD=/tmp/iwin.so
export LD_PRELOAD=/tmp/iwin.so
