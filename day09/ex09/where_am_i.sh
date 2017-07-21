#!/bin/sh
NUMLINES=$(ifconfig | grep -o 'inet \d\{1,3\}\.\d\{1,3\}\.\d\{1,3\}\.\d\{1,3\}' | cut -f2 -d ' ' | wc -l)
if [ "$NUMLINES" = "0" ]; then
	echo "Je suis perdu!"
else
	ifconfig | grep -o 'inet \d\{1,3\}\.\d\{1,3\}\.\d\{1,3\}\.\d\{1,3\}' | cut -f2 -d ' '
fi
