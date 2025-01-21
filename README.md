

# SUDOKU


---
### Project Definition:
In this project, we plan to implement the Sudoku game in the console environment.
The Sudoku game consists of a 9x9 table, which itself consists of 9 smaller 3x3 tables. Different cells The table is initially filled with different values. To complete the game, the table must be filled according to the following three rules:

![Image](https://github.com/user-attachments/assets/c944c7c3-aa7f-4b59-a09c-92a333f9f08a)
![Image](https://github.com/user-attachments/assets/0e8d7048-752d-4746-a493-3f51c45fe636)

• In each row of the table, the numbers 1 to 9 must be placed without repetition.

• In each column of the table, the numbers 1 to 9 must be placed without repetition.

• In each 3x3 area, the numbers 1 to 9 must be placed without repetition.

### Program Environment:

In the first part of the game, the user must be able to choose between two options: new-game, exit.
If the new-game option is selected, a Sudoku table is formed. Next, by taking three values: length, width and value (x, y, value) from the left, you can start solving the table.
Note that the program refuses to apply inputs whose cells were initially specified. For example, the input 0 0 1 is not accepted because the constant value 5 is written in that cell.

If the table is solved, the phrase “You Solved Sudoku” is displayed. Entering the phrase quit will return to the main menu of the game.

If you select the exit option, you will exit the game.
