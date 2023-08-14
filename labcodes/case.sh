#!/bin/sh
read -p "Are you 21 or over? y/n" ans
case "$ans" in
	[yY] | "yes") echo " you can drink"
	;;
	[nN]) echo "you can not drink"
	;;
	*) echo "Please enter y/Y/yes or n/N"
	;;
esac
