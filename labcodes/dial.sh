#msgbox
#dialog --title "Good Box" --msgbox "Hello from Dialog" 10 30
#dialog title typeOfDisplay  size 

#down page and upPage to scroll

#yesNobox
#dialog --title "Box 2" --yesno "Is this working?" 10 30
#echo "$?" 

#infobox
#dialog --infobox "Information xyz" 10 30 

#wait
#dialog --infobox "AAB" 10 30
#sleep 5

#textbox
#dialog --textbox chmod.txt 40 80

#menu
#dialog --menu "Select one" 40 80 4 1 A 2 B 3 C 4 D
#but we want to see std output, i.e we need std output in a variable


exec 3>&1
var=$(dialog --menu "Select one:" 10 30 4 1 A 2 B 3 C 4 D
 2>&1 1>&3)
exitcode=$?
exec 3>$-
echo $var $exitcode


#What exactly is the above code?
#I-O STREAMS! 0=In,1=Out,2=Error, 3-9 free usable streams
#All streams are internally represented by file descriptors in /dev/fd
#exec 3>&1 exec is used to apply a stream redirection to the shell. 
#Here stream 3 is redirected to stream 1
#2>&1 1>&3 two redirection commands interpreted right to left!!
#1>&3 redirects 1 to 3
#2>&1 redirects 2 to 1


#Input Box
#exec 3>&1
#var=$(dialog --inputbox "Please Enter Something" 10 30 2>&1 1>&3)
#exec 3>$-
#echo $var 
