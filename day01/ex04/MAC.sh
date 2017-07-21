#!/bin/sh
ifconfig | grep 'ether'| sed '/ethernet/ d' | cut -f 2 -d 'r' | tr -d ' ' | sed G
