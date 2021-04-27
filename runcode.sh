# A simple bash script for linux to compile one file and put the executable with .out extension in the output folder
#!/bin/bash
echo -e "What file do you want to compile & run, no extension please?" 
read file
source="src/${file}.c"
destination="output/${file}.out"
gcc-10 $source -o $destination -O3 -Wall -std=c17 -Wno-missing-braces