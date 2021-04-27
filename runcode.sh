#!/bin/bash
echo -e "What file do you want to compile & run, no extension please?" 
read file
source="src/${file}.c"
destination="output/${file}"
gcc-10 $source -o $destination -O3 -Wall -std=c17 -Wno-missing-braces