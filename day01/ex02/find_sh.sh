#!/bin/sh
basename $(find . -type f -name '*.sh') | cut -f 1 -d '.'
