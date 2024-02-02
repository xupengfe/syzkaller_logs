#!/bin/bash

echo "gcc -pthread -o repro repro.c"
gcc -pthread -o repro repro.c
for((i=0; ;i++)); do
  echo "$i times ./repro"
  ./repro
done
