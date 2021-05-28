# ProgrammingLanguage
A programming language is designed and implemented using the Lex and Yacc compiler generating package to be used as a compiler for C language.

# Team 13
| Team members | Sec  | BN  |
| ------- | --- | --- |
| Ahmed Hamdy | 1 | 1 |
| Ayat Mostafa | 1 | 10 |
| Mohamed Abdullah | 2 | 16 |
| Nada Adel | 2 | 27 |

# Notes
   - Any complete statement (line) ends with a semicolon(;)

# If - Else statement

     if ( expression ) {
          line1
          line2
          ...
     }
     else if ( expression ) {
          line1
          line2
          ...
     }
     ...
     ...
     else {
          line1
          line2
          ...
     }


# Switch - Case statement

     switch ( identifier ) {
          case number/char/string :
               line 1
               line 2
               ....
               break;

           ...
           ...

           default :
               line 1
               line 2
               ....
               break;
     }

# For Loop statement

for ( int i = 0; i < n; i = i + 1 )
{
     line 1

     line 2
}     

# While Loop Statement

while(/*any_logical_exp*/)
{
	
	line 1
	
	line 2
	....
}

# Repeat Until Statement

do 
{	
	
	line 1
	
	line 2
	....
}
while(/*any_logical_exp*/);

# Block Structures

/* any number of nested blocks, each defined with a start and an end curly braces */

{
	
	line 1
	
	....
}

{
	
	line 1;
	{
		line 2
		
		line 3
		....
	}
	line 4
	....
}

/* each block can contain any other type of statements with no constraints */

# Data Types supported 
     -int 
     -float
     -char
     -string
     -bool
     -void for function 

# Variable declaration and definition 
     e.g 
     int x;
     int y=5;
     string name = "I love compiler course"
     char c='a';
     bool flag=true;

# Functions
     Data_type function_name(params){

          line1
          
          line2
          .. 

          return expression;
     }
