#!/usr/bin/env sh

echo "Digite um valor de 1 a 10"
read valor
test $valor -lt 1 -o $valor -gt 10 && echo Incorreto || echo Correto
