#!/bin/bash
find . -type f -name '*.sh' | sed 's/.*\///' | awk '{gsub(/\.sh/,"");print}'
