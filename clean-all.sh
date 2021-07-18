#!/usr/bin/env bash

declare -a dirs=( "bits" "data-types" "function-pointers" "memory" )

compile()
{
  echo "Building $1/$2"
  pushd "$2" > /dev/null
  make clean
  popd > /dev/null
}

compile_all()
{
  pushd "$1" > /dev/null
  for dir in */ ; do
    compile "$1" "$dir"
  done
  popd > /dev/null
}

for i in "${dirs[@]}"
do
  compile_all "$i"
done
