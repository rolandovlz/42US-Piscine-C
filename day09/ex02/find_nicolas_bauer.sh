#!/bin/sh
cat $1 | tr -d '[:blank:]' | grep -i "^nicolasbauer" # | tr A-Z a-z | tr -d a-z | tr -d '[:punct:]' | tr -d '[:special]'
