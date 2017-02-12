[![Build Status](https://travis-ci.org/cedwick/libunit.svg?branch=master)](https://travis-ci.org/cedwick/libunit)
  ____            _       _     _ _     _   _ _   _ ___ _____ 
 |  _ \ _   _ ___| |__   | |   (_) |__ | | | | \ | |_ _|_   _|
 | |_) | | | / __| '_ \  | |   | | '_ \| | | |  \| || |  | |  
 |  _ <| |_| \__ \ | | | | |___| | |_) | |_| | |\  || |  | |  
 |_| \_\\__,_|___/_| |_| |_____|_|_.__/ \___/|_| \_|___| |_| 

 Type		: RUSH
 Name		: LibUNIT
 Repository : vogsphere@vogsphere.42.fr:intra/2017/activities/42_formation_pole_emploi_rushes_libunit/cbarbier3
 Students	: cbarbier@student.42.fr - matirell@student.42.fr

 Hello dear 42Student !

 This readme is intented for you to understand how this project works.

 Well, if you are on the root, you may want to compile the library by using our fabulous makefile.
 Our project is organised in this way :

 /
 /framework			Well, this is the libunit Micro-Framework, the core of this projec
 /tests				Here you'll find the tests for all your projects. Feel free to add some.
 /tests/*			The subdirectories where you'll find all the testings Routines.

 How does it works ?

 All the functions to test your project are build into tests folders.
 You need to add it in the testing list by calling the function
 
 load_test(t_unit *tests, char *testname, int (**ft)());

 Where tests corresponds to your t_unit test list, testname to help identifying the corresponding test and the function pointer.

 Then, once you loaded all your tests, you can call ft_execute_tests(t_unit *tests); to start the magic.

 Good testings,

