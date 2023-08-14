#!/bin/bash
echo -e " Enter file name: \c "
read f_name
if [ -e $f_name ]
then
echo "$f_name found" 
else
echo "$f_name not found"
fi


