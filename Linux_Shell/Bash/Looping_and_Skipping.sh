for i in {0..100..1}
    do
        let "N=$i%2" 
        if [ "$N" != "0" ]; 
        then 
            echo $i; 
        fi; 
    done;
