# **Time-Complexity-Calculator**

### It is a sinple implementation of a basic time complexity calculator in Python.
The idea is that in a program, the main contribution to the time complexity comes through loops and recursions. Although currently I am not working on recusrsion in this project, it plays a major role in calculating time complexity.
<br><hr>

- In this program, the first step is to read/ input a C program file. Currently this is done via Google Drive but it can be much more easier and user friendly once a UI is done for this.

- Then the loops and code blocks are extracted and temporarily placed in a list. If the C program file uploaded has been written with standard syntax, then the code blocks are determined by the opening and closing of the curly braces or parantheses.

- Then the code block with its' corresponding time complexity is appeneded to a dictionary.

- After the full file has been processed, the dictionary containing the individual time complexities. These are added and finally one output is obtained that signifies the Big Oh (O) of that program.
