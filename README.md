# Robotics-Learning
Robotics Engineering journey | Arduino → ROS2 → SLAM | C++ · Python · Embedded Systems

------

## Day 1 - Arduino And Breadboard Basics
### Concepts Learned:
1. What is a microcontroller?
2. Why Git and GitHub?
3. VS Code vs Arduino IDE
4. What happens when you press Upload in Arduino IDE?
5. Digital Output using LEDs
6. Digital Input using Push Buttons
7. Basic Breadboard Connections

### Projects Completed 
#### 1. Blink LED
- LED connected to Arduino UNO
- LED blinks at regular intervals using `digitalWrite()`
- Learned about OUTPUT pins and timing using `delay()`
##### Components Used
- Arduino UNO
- Breadboard
- LED
- 220Ω Resistor
- Jumper Wires
<img width="725" height="559" alt="Screenshot 2026-06-17 at 7 59 12 PM" src="https://github.com/user-attachments/assets/91bdc765-0c95-4efb-b044-084c4a1c3a8e" />

#### 2. Push Button Controlled LED
- LED controlled using a push button
- Learned about INPUT pins and `digitalRead()`
- Used `if-else` statements to control LED state
##### Components Used
- Arduino UNO
- Breadboard
- Push Button
- LED
- 220Ω Resistor
- 10kΩ Resistor
- Jumper Wires
<img width="911" height="568" alt="Screenshot 2026-06-17 at 10 54 09 PM" src="https://github.com/user-attachments/assets/4ded4869-e184-43c9-90ca-65b606e1ca53" />

### Skills Gained
- Arduino IDE Setup
- Git & GitHub Basics
- Basic Arduino Programming
- Breadboard Wiring
- Digital Input/Output

------

# Day 2 - C++ Basics: Variables, Loops & Conditionals

## Concepts Learned

### Variables
A variable is a named storage location used to hold data that can be accessed and modified during program execution.

### Data Types
- `int` – Stores whole numbers
- `float` – Stores decimal numbers
- `bool` – Stores true or false values
- `char` – Stores a single character

### Constants
Used `const` to define values that should not change during program execution.

### Serial Communication
- `Serial.begin(9600)`
- `Serial.print()`
- `Serial.println()`

### Loops
- `for` loop
- Repeating code efficiently

### Conditional Statements
- `if`
- `else`
- Decision making in programs

### Modulo Operator (%)
Used to determine whether a number is odd or even.

# Projects Completed

## 1. Variables and Data Types

### Description
Created variables using different data types and displayed their values in the Serial Monitor.

### Concepts Used
- int
- float
- bool
- char
- Serial.println()

### Output:
<img width="457" height="533" alt="1" src="https://github.com/user-attachments/assets/36799556-7153-47d5-820d-6e7dee7d0e1d" />

## 2. For Loop Counter

### Description
Printed numbers from 1 to 10 using a for loop.

### Concepts Used
- for loop
- Counter variable
- Serial Monitor

### Output:
<img width="661" height="586" alt="2" src="https://github.com/user-attachments/assets/1e0604bd-963f-4a62-8285-3aa0a38633f2" />

## 3. Odd / Even Checker

### Description
Checked whether numbers from 1 to 20 are odd or even using if-else statements and the modulo operator.

### Concepts Used
- if-else
- modulo (%)
- for loop
- Serial Monitor

### Output:
<img width="516" height="581" alt="3" src="https://github.com/user-attachments/assets/194f817c-3bd0-482c-b2b3-a0873099f07e" />

## Skills Gained

- Variable Declaration
- Data Types
- Constants
- Serial Communication
- Looping Logic
- Conditional Programming
- Problem Solving
- Debugging using Serial Monitor

---

# Day 3 - Functions: Write Code Once, Use It Anywhere

## Concepts Learned:

### What is a Function?
A function is a named block of code that performs a specific task. It can be called multiple times without rewriting the same code.

### Why Use Functions?
- Avoid repeating code
- Improve readability
- Make programs easier to maintain
- Simplify debugging and future modifications

### The Four Parts of a Function
- Return Type (void, int, float, etc.)
- Function Name
- Parameters
- Function Body
  
### Types of Functions
- Void Function – Performs a task but does not return a value.
- Return Function – Performs a calculation and returns a value.
  
### Parameters
Parameters allow data to be passed into a function, making it flexible and reusable.

### Refactoring
Refactoring means improving the structure of code without changing its behavior. Functions help eliminate duplicate code.

# Projects Completed:

## 1. addTwoNumbers()

### Description
Created a function that accepts two integers, adds them together, and returns the result.

### Concepts Used
- Function declaration
- Return type (int)
- Parameters
- return statement

### Sample Output
- 5 + 3 = 8
- 100 + 200 = 300
- -10 + 25 = 15

### Output:
<img width="500" height="542" alt="Screenshot 2026-06-22 at 9 43 07 AM" src="https://github.com/user-attachments/assets/ca208358-63e9-4681-bf36-519b9769ca26" />

## 2. celsiusToFahrenheit()

### Description
Created a function that converts Celsius to Fahrenheit using the standard conversion formula.

### Formula
- F = (C × 9.0 / 5.0) + 32.0

### Concepts Used
- Float data type
- Mathematical calculations
- Returning decimal values
- 
### Sample Output
- 0°C = 32.00°F
- 37°C = 98.60°F
- 42°C = 107.60°F
- 100°C = 212.00°F

### Output:
<img width="518" height="534" alt="Screenshot 2026-06-24 at 7 03 14 PM" src="https://github.com/user-attachments/assets/08c1bf6a-212e-4833-bf7d-e5eb3094850b" />

## 3. blinkLED()

### Description
Created a reusable function to blink an LED by passing the pin number, number of blinks, and blink duration as parameters.

### Concepts Used
- Custom functions
- Parameters
- for loop
- digitalWrite()
- delay()

### Demonstration
- 3 short blinks
- 5 fast blinks
- 1 long blink

# Skills Gained
- Creating Custom Functions
- Function Parameters
- Return Values
- Code Reusability
- Code Refactoring
- Modular Programming
- Mathematical Functions
- LED Control using Functions

------

# Day 4 - Terminal, Git Commands & Linux Basics

## Concepts Learned

### Terminal
A terminal is a text-based interface that allows users to interact with the operating system using commands instead of a graphical interface.

### File System Navigation
Learned how to navigate directories and manage files using terminal commands.

### Absolute vs Relative Paths
- `Absolute Path` – The complete path from the root directory.
- `Relative Path` – A path relative to the current working directory.

### Linux Terminal Commands
- `pwd` – Display current working directory.
- `ls` – List files and folders.
- `cd` – Change directory.
- `mkdir` – Create a new directory.
- `touch` – Create a new file.
- `rm` – Remove files.
- `echo` – Write content into a file.

### Git Basics
Git is a distributed version control system used to track changes in source code and collaborate efficiently.

### Git Workflow
Working Directory → Staging Area → Local Repository → Remote Repository (GitHub)
- `Git Commands`
- `git init`
- `git status`
- `git add`
- `git commit`
- `git log`
- `git diff`
- `git remote`
- `git push`
- `.gitignore`
Learned how to exclude unnecessary build files and system-generated files from a Git repository.

## Projects Completed:

### 1. Terminal Navigation Practice

#### Description
Practiced navigating directories, creating folders, creating files, deleting files, and moving between directories using Linux terminal commands.

#### Concepts Used
- `pwd`
- `ls`
- `cd`
- `mkdir`
- `touch`
- `rm`

### 2. Git Workflow Practice

#### Description
Initialized a Git repository, tracked files, created commits, viewed commit history, and compared file changes.

#### Concepts Used
- `git init`
- `git status`
- `git add`
- `git commit`
- `git log`
- `git diff`

### 3. GitHub Repository Organization

#### Description
Organized Week 1 Arduino sketches into separate day folders, connected the local repository to GitHub, pushed commits, and created a .gitignore file.

#### Concepts Used
- `git remote add`
- `git push`
- `Repository Structure`
- `.gitignore`
- `Version Control Best Practices`

## Skills Gained
- Terminal Navigation
- Linux File System Basics
- Git Version Control
- GitHub Workflow
- Commit History Management
- Repository Organization
- File Tracking
- Difference Between Staged and Unstaged Changes
- Using .gitignore
- Software Development Best Practices









