#!/bin/bash

if [ $# -eq 0 ]; then
  echo "Please provide a name as an argument"
  exit 1
fi

name=$1

echo "Bisoning..."
bison -v -d "${name}.y"
echo "Bison done"
echo "Flexing..."
flex -o "${name}.yy.c" "${name}.lex"
echo "Flex done"
echo "Compiling..."
gcc -o "${name}" "${name}.tab.c" "${name}.yy.c" semantic.c
