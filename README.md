# Super-Calcilator_Cpp_CommandLine
this repository is a C++ command line application....that use a long String of operators ..provided by 
user (with tow numbers to calcilate)..and than calcilate the whole operation as long as there is an operator in the user field..
each operation has its option and limits in the user field for example you can not enter an Addition operator while the operation is
Multiplication ...instead use an Addition operation first - and vise versa..
*to go to the real and main function of this app you should use *All Operations* option which is provided as well..there you can
get the result from all operations through combining all possible operators and than calcilate them together ...

*perhaps the user want to calcilate 10 + 10
he will use Addition Operation[+]
and then he enter a long string in the operator field like that
++++++++++++++++++++++++++++++++++++++++++++++++++++++++
this will led the algorithm to calcilate the operation like this
10 + 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10 + 10
and then add the whole result like this
20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20
it calcilate all that depends on the string entered by the user..long or short.
and then it genrates the result and the times operation has been applied 
*result = 540
*applied = 45 times

_*Multiplication[*]
user input
***********************************************************
this will led the algorithm to calcilate the operation like this
10 * 10 * 10 *10 * 10 *10 * 10 *10 * 10 *10 * 10 *10 * 10 *10 * 10 *10 * 10 *10 * 10 *
and then add the whole result like this
20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20

-*Division
user input
//////////////////////////////////////////////////////////////
this will led the algorithm to calcilate the operation like this
10 / 10 / 10 /10 / 10 /10 / 10 /10 / 10 /10 / 10 /10 / 10 /10 / 10 /10 / 10 /10 / 10 /
and then add the whole result like this
20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20 + 20

_*Substruction
user input
------------------------------------------------------------
this will led the algorithm to calcilate the operation like this
10 - 5 - 10 - 5 - 10 - 5 - 10 - 5 - 10 - 5 - 10 - 5 - 10 - 5 - 10 - 5 - 10 - 5 - 10 - 5
and then add the whole result like this
5 + 5 +5 + 5 +5 + 5 +5 + 5 +5 + 5 +5 + 5 +5 + 5 +5 + 5 +5 + 5 +5 + 5 +5 + 5 +5 + 5 +5 + 5

-*Modulo
user input
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
this will led the algorithm to calcilate the operation like this
10 % 5 %10 % 5 %10 % 5 %10 % 5 %10 % 5 %10 % 5 %10 % 5 %10 % 5 %10 % 5 %10 % 5 %10 % 5 %
and then add the whole result like this
0 + 0 +0 + 0 +0 + 0 +0 + 0 +0 + 0 +0 + 0 +0 + 0 +0 + 0 +0 + 0 +0 + 0 +0 + 0 +0 + 0 +0 + 0

-*Power
user input
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
this will led the algorithm to calcilate the operation like this
10 ^ 2 ^ 10 ^ 2 ^ 10 ^ 2 ^ 10 ^ 2 ^ 10 ^ 2 ^ 10 ^ 2 ^ 10 ^ 2 ^ 10 ^ 2 ^ 10 ^ 2 ^ 10 ^ 2 
and then add the whole result like this
100 + 100 + 100 + 100 + 100 + 100 + 100 + 100 + 100 + 100 + 100 + 100 + 100 + 100 + 100 + 100

_*Factorial
user input
!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
this operation takes only one number to return the factorial..and that
will led the algorithm to calcilate the operation like this( if user choose 5)
!5 !5 !5 !5 !5  !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5 !5
and then add the whole result like this
121 + 121 +121 + 121 +121 + 121 + 121 + 121 +121 + 121 +121 + 121 +121 + 121 +121 + 121 

_*All Operations[*.*]
Now its came to the real function of the Algorithm to take all operations combined and parsse the user input(operator field) and then
return the result of eche operation with its operator (provided by user) ..
for example a user want to calculate two numbers 10 and 7
and then he entered the follewing input (in the operator field)

user input
+++++++++**************///////////////////%%%%%%%%%%%%%%%^^^^^^^^^^^^^^^^!!!!!!!!!!!--------++++++
this will led the algorithm to calcilate the operation like this
10 + 7 +10 + 7 +10 + 7 +10 + 7 * 10 * 7 * 7 * 10 * 7 * 7 * 10 * 7 * 7 * 10 * 7 * 7 * 10 * 7 / 10 / 7/ 10 / 7/ 10 / 7/ 10 / 7/ 10 / 7/ 10 / 7/ 10 / 7/ 10 / 7 % 10 % 7 % 10 % 7% 10 % 7% 10 % 7% 10 % 7% 10 % 7 ^ 10 ^ 7 ^ 10 ^ 7^ 10 ^ 7^ 10 ^ 7^ 10 ^ 7^ 10 ^ 7 ^ 10 ^ 7^ 10 ^ 7 ! 10 ! 10 !10 !10 !10 !10 !10 !10 - 10 - 7 - 10 - 7 - 10 - 7 - 10 - 7 - 10 - 7 - 10 - 7 - 10 - 7- 10 - 7 +10 + 7+10 + 7+10 + 7+10 + 7 
(notice that factorial ! operator applied only on first number wich is 10)
and then add the whole result like this
17 + 17 +17 + 17 +17 + 17 +17 + 17 + 70 + 70 +70 + 70 +70 + 70 +70 + 70 +70 + 70 + 1.4 + 1.4 +1.4 + 1.4 +1.4 + 1.4 +1.4 + 1.4 +1.4 + 1.4 +1.4 + 1.4 +1.4 + 1.4 + 3 + 3 +3 + 3 +3 + 3 +3 + 3 +3 + 3 +3 + 3 + 3 + 3 + 10000000 + 10000000 +10000000 + 10000000 +10000000 + 10000000 +10000000 + 10000000 +10000000 + 10000000 +10000000 + 10000000 + 5040 + 504 +5040 + 504 +3628800 +3628800 +3628800 +3628800 +3628800 +3628800 +3628800 +3628800 +3628800 +3628800 + 3 +3 +3 + 3 + 3 +3 +3 +17 +17 +17 +17 +17 +17
it calcilate all that depends on the string entered by the user..long or short.
the result will be 100% correct ..However if the user inputs the wrrong charecter within the operator field and will not included in the 
calcilation ..and the program will send an error message (that in the GUI version).

this the standard features .. more features will come soon with more operations suported..
however a gui version is exist, which is include more features by default.. 

GUI version..
this was a Console Mode Application which developed with C++ ..
the GUI version is now avaleble in other repository..its developed with C# and contain all the standard features included in the console
application sofar ...






