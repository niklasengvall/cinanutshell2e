# A simple bash script for linux to compile one file and put the executable with .out extension in the output folder
# and start debugging the file with GDB
#!/bin/bash
echo -e "What file do you want to compile & run, no extension please?" 
read file
source="src/${file}.c"
destination="output/${file}.out"
gcc-10 $source -o $destination -g -Og -Wall -Wextra -Wpedantic -std=c17 -Wno-missing-braces
gdb $destination