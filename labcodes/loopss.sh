#!/bin/sh
a=0

while [ $a -lt 10 ]
do
	echo $a
	a=`expr $a + 1`
done

b=0
until [ ! $b -lt 10 ]
do
	echo $b
	b=`expr $b + 1`
done
