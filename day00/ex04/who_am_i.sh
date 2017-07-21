#!/bin/sh
ldapwhoami | cut -f 2 -d ':'
