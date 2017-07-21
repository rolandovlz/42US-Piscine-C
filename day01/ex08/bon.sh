#!/bin/sh
ldapsearch -Q -LLL "(cn=*bon*)" cn | sed '/dn:/ d' | sed '/^$/ d' | wc -l | tr -d ' '
