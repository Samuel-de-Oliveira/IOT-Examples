#!/usr/bin/env sh

while [ 0 ]; do
  echo "Digite [S/n]"
  read value
  echo "Seu valor é $value"

  if [ $value = "s" ]; then
    echo "Tchau!"
    break
  fi
done
