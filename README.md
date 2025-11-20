# Transport-Management
Abstract


The Transport Management System is a simple, terminal-based application developed in C for managing vehicle and transport-related records efficiently. The system provides essential functionalities, including adding new vehicle details, searching for vehicles by ID or name, updating existing entries, and deleting outdated records. All transport information is stored persistently in a binary .dat file, ensuring that data remains available across multiple program sessions. Designed for simplicity and usability, the system features a clean, menu-driven interface suitable for beginners and small-scale transport departments. The project demonstrates core C concepts such as file handling, structures, arrays, and menu-driven program flow, making it a practical solution for managing transport data in a lightweight and accessible format.

Features of the Program
Add new vehicle records with details (vehicle name, type, route, driver info, contact, etc.)


View all stored vehicle records in an organized list


Search for vehicles by ID or name


Update existing vehicle information (driver, contact, route, type, etc.)


Delete transport records from the database


Persistent data storage using a .dat file


Fully terminal-based (CLI) interface


Beginner-friendly, easy-to-understand C program structure


Automatically creates the data file if it doesn’t already exist


Basic error handling for invalid input and missing files



Technical Requirements
1. System Requirements
Operating System: Windows / Linux / macOS


Terminal/command-line environment


Minimum RAM: 4 MB


Minimal disk space for .dat storage


2. Software Requirements
C Compiler: GCC / MinGW / Clang / MSVC


Any text editor or IDE (VS Code, Code::Blocks, Dev-C++, Vim, etc.)


Optional: Make tool if using Makefile


3. Programming Requirements
Language: C


Supported Standards: C89 / C99 / C11


Required Libraries:


<stdio.h>


<stdlib.h>


<string.h>


4. File Handling Requirements
Read/write access to the working directory


All transport records are stored in a binary .dat file


The program automatically creates transport.dat if not present


5. Compilation Requirements
Program must compile without errors


Recommended flag:

 -Wall  (to show warnings)



Functional Requirements
1. User Interface
Entirely terminal-based (CLI)


Displays a clear, easy-to-read menu


Accepts and validates user inputs


2. Transport Record Operations
Add Vehicle: Enter and save new transport information


Search Vehicle: Find records using vehicle ID or name


View Vehicles: Display all saved transport data


Update Vehicle: Modify vehicle details such as route, driver contact, type


Delete Vehicle: Remove a specific record from the database


3. Data Management
Uses a persistent .dat file


Retains vehicle data across multiple runs


Gracefully handles missing or newly created data files


4. Program Flow
Uses a continuous menu loop until user chooses Exit


Displays confirmation and error messages


Smooth navigation between modules



How to Run the Program
1. Compile the Program
Open the terminal in the project folder and run:

gcc transport_management.c -o transport_management

2. Run the Executable
Linux/macOS

./transport_management

Windows

transport_management.exe

3. Data File Information
The program automatically creates transport.dat


All records are saved and loaded from this file



