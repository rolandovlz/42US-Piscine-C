#!/bin/sh
ldapsearch -LLL "(uid=z*)" cn | sed '/dn:/ d' | sed '/^$/ d' | sort -r
