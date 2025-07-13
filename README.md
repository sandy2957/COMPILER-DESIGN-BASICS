# COMPILER-DESIGN-BASICS                   

*COMPANY*: CODTECH SOLUTIONS

*NAME*: T.SANTHIYADEVI

*INTERN ID*: CT04DH427

*DOMAIN*: C LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

As part of my third internship task at CodTech, I was assigned to create a simple lexical analyzer using the C programming language. The goal of this task was to analyze an input file and identify keywords, operators, and identifiers. This task introduced me to one of the fundamental components of compiler design, which is lexical analysis.

A lexical analyzer, or scanner, is responsible for breaking down a stream of text (usually code) into meaningful elements called tokens. These tokens are then passed on to the syntax analyzer or parser. Though in real compilers this is a complex process involving regular expressions and finite automata, for this project, I focused on creating a basic version that can recognize simple tokens in C source code.

To begin, I prepared a basic understanding of what constitutes a keyword, identifier, and operator:

Keywords are reserved words in C like int, if, while, return, etc.

Identifiers are user-defined names such as variable names or function names.

Operators are symbols like +, -, *, =, etc.


I created a sample C file (sample.c) containing a few lines of code, including variable declarations, conditions, and basic operations. My C program then opens this file using fopen() and reads its content character by character.

Using logic based on character types, I handled the lexical analysis in the following way:

1. If a character is alphabetic, I built a word until a delimiter (like a space or newline) was encountered. Then I checked if this word matches any C keyword using a keyword array. If it matched, I classified it as a keyword; otherwise, as an identifier.


2. If the character was a symbol like +, -, *, /, =, or others, I immediately printed it as an operator.


3. All whitespace and newline characters were treated as separators and ignored in the tokenization logic.



I used functions like isalpha() and isalnum() from the ctype.h library to distinguish between characters, and strcmp() from string.h to compare strings. The output displayed each token along with its category, making it easy to understand the lexical structure of the input code.

This task helped me appreciate the inner workings of a compiler at a beginner level. I learned how text can be processed programmatically and how meaningful information can be extracted from code using character-level operations. It also helped improve my logic-building skills and understanding of C strings.

I added comments throughout my code to make it more readable and maintainable. I also tested the program with different input files to ensure it could identify a variety of keywords and operators correctly.

Overall, Task 3 was both educational and exciting. It gave me insight into how programming languages are understood by computers, and how a simple tool can break down code into components. It has motivated me to explore more topics in compiler design and lexical processing in the future.
