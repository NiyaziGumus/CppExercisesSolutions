# MEDICAL LAB INVENTORY SYSTEM

## Project Description
This project is an exercise in learning the C++ programming language. It is designed to solve a specific programming concept or problem.

## Problem Statement
This application provides the solution to the following problem:

> **Problem Description**

Design and implement a console-based medical laboratory inventory management system using C++. The system should allow users to manage medical items efficiently, including adding new items, searching by manufacturer, sorting items, and displaying the current inventory.
Requirements:
	- Struct Definition:
    	- Define a struct called MedicalItem with the following fields:
        - name (string): The name of the medical item.
        - manufacturer (string): The manufacturer of the item.
        - price (double): The price of the item.
        - available (char or bool): Indicates whether the item is available (e.g., 'Y' or 'N').
- Functionality:
    	- Implement the following features as a text menu:
        - Add New Item:
        - Prompt the user to enter details for a new medical item (name, manufacturer, price, availability).
        - Add the item to an inventory list (use a vector).
        - Search by Manufacturer:
            - Prompt the user to enter a manufacturer's name.
            - Display all items from the inventory that match the given manufacturer.
        - Sort Items by Name:
            - Sort the inventory items alphabetically by their names.
        - Display Current Inventory:
            - Print out all parameters (name, manufacturer, price, availability) of each item in the inventory.
        - Exit Program:
            - End the program gracefully.
- Efficient Data Passing:
    - Use appropriate data structures (e.g., vectors) to efficiently store and manage the inventory.
    - Pass data between functions using references or pointers to avoid unnecessary copying.
- Smart Pointers (Optional):
    - Consider using Smart Pointers to manage memory for dynamically allocated objects (e.g., dynamically adding items to the inventory).

Implementation Guidelines:- Use a switch statement to handle the menu options.
- Validate user input (e.g., ensure valid prices, handle invalid menu choices).
- Organize your code into functions (e.g., separate functions for adding, searching, sorting, and displaying).
## How to Run
To run this project, follow these steps:

1. Open the project in your preferred C++ IDE or text editor.
2. Compile the source code file(s) containing the `main()` function.
3. Run the compiled executable file.
4. If required, provide any necessary input as prompted by the program.
5. Observe the program output in the console or terminal.

Note: You can either work with individual source code files or open the entire solution in your IDE. The choice depends on your preferred workflow and the project structure.

