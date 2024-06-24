#!/bin/bash
FT_LINE1=$FT_LINE1
FT_LINE2=$FT_LINE2
cat /etc/passwd | grep -v '#' | sed -n 'n;p' | cut -d ':' -f 1 | rev |
sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | paste -sd ',' - | sed 's/$/./'
