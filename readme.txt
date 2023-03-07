*******************************************SHELL**************************************************
______________________________________________________________________________________________
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
6  touch test{1,3,5}
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

