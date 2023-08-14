os=('linux' 'windows' 'shell')
echo "${os[@]}"
echo "${os[0]}"
echo "${!os[@]}"
echo "${#os[@]}"

Hello(){
	echo "Hello $1 $2"
	return 5
}

Hello Hriday Nagrani
ret=$?
echo "Return value: $ret"
