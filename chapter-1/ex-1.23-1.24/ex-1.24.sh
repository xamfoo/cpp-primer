#!/usr/bin/env bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

cd $DIR

set -e

echo \
  item1 1 1 \
  item1 1 1 | ./ex-1.23

echo \
  item1 1 1 \
  item1 1 1 \
  item2 3 20.00 \
  item2 3 1.00 \
  item3 4 40.00 | ./ex-1.23

echo "OK"
