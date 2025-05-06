#!/bin/sh

if [$# -eq 0]; then
       	exit
fi

while [$# -gt 0]; do
	last = "$1"
	shift
done

echo "$last"

