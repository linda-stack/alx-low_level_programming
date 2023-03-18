#!/bin/bash
n=$((RANDOM - 32767 / 2)); if ((n > 0)); then echo "$n is positive"; elif ((n == 0)); then echo "$n is zero"; else echo "$n is negative"; fi
