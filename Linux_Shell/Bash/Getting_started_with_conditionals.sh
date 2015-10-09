read -n 1 n1

if [[ "$n1" == 'Y' || "$n1" == 'y' ]]; then
    echo 'YES'
elif [[ "$n1" == 'N' || "$n1" == 'n' ]]; then
    echo 'NO'
fi
