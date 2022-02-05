for i in 1 2 3 4 5
do
sleep 5s
ps aux | grep "./star_2" | awk '{print $2}' | xargs kill -9 $2 #to kill the value
done
exit 0
