git status -s --ignored=traditional | grep '!!*' | awk '{print $2}'
