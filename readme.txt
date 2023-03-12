*******************************************SHELL**************************************************
_______________________________________linux-faq.ru_______________________________________________________
1 echo Z > z
*
2 printf "12345" >> test.
*
3 touch -c -t 06012342 test  ( The 1st of June 23:42)
*
4 chmod 
|    (4-r,2-w,3-x; 4+2+1=7; 4+2=6; 4+1=5; chmod 455 file_name   or   chmod u=rwx,g=rwx,o=rwx file_name )
*
5 tar -cf test.tar test
|    tar -cf name.tar*  --- to make an archive which consisted of all files current directory
*
6 touch test{1,3,5}
| to make test1,test3,test5
*
7 symbol link  
|   ln -s test0 test6   /* test6 --> test0 */
*
8 link
|   ln test 3 test 5 /* test3 --> test5 */
*
9 ls -Ump > file_name   /* list of current directory's files in file_name
*
10 patch file
| file a, file b contains file a details + changes, we need to patch file a with file b changes 
| diff a b > c
| patch a -i c -0 a_new
*
11 to make a script that shows user's groups:
| make a script_file print_groups.sh with #!/bin/bash or #!/bin/sh  and groups user_name
|to perform a script : sh print_groups.sh
*
12 to find a file 
| find . -name '*.sh' ( to find all sh-files)
*
13 to count an amount of files and directories
|(find . -type d && find . -type f)|wc -l > count
*
14 SHOW MAC address
|ifconfig
| ifconfig|grep "ether" to show only mac address string
| ifconfig|grep "ether"|sed "s/ether // "|sed "s/(Ethernet)//" to delete words "ether" and "Ethenet"
| add cut command with options to make if you need to make it right
*
15 to show 1,3,5,7 etc string(kip 2,4,6, etc)
|ls -l | awk 'NR %2 ==1'
*
16 cat etc/passwd | grep -v "^#" | sed '1!n;d' | sed -e 's/:.*//' | rev | sort -r | sed -n "$FT_LINE1 $FT_LINE2 p" | sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g' | sed 's/$/./' | tr -d '\n'
|cat/etc/passwd - to print text of file
|grep -v "^#" - to delete comments
|sed '1!n;d' - to show 1,3,5,7 etc number of the string
|sed -e 's/:.*//' - to delete everything from the rigt subdirectories
|rev - to reverse every login
|sort -r - to sort since Z to A 
|sed -e ':a' -e 'N' -e '$!ba' -e 's/\n/, /g - to replace \n to ,
sed 's/$/./' - put dot in the end and delene \N

*

17.



_______________________________________________________________________________________________________

********************************************GITHUB*****************************************************
_______________________________________________________________________________________________________
1 git remote add origin git@github.com:turboswanson/42.git
#
2 git branch -M main
#
3 create script.sh to show commit's ID
#!/bin/sh or #!/bin/bash
git log -n 5 --pretty=format:"%H"

to launch it : sh script.sh
#
4 touch .gitignore

