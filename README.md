Abstract


The Transport Management System is a simple, terminal-based application developed in C for managing vehicle and transport-related records efficiently. The system provides essential functionalities, including adding new vehicle details, searching for vehicles by ID or name, updating existing entries, and deleting outdated records. All transport information is stored persistently in a binary .dat file, ensuring that data remains available across multiple program sessions. Designed for simplicity and usability, the system features a clean, menu-driven interface suitable for beginners and small-scale transport departments. The project demonstrates core C concepts such as file handling, structures, arrays, and menu-driven program flow, making it a practical solution for managing transport data in a lightweight and accessible format.

FEATURES OF THE PROGRAM

1.Add new vehicle records with details (vehicle name, type, route, driver info, contact, etc.)


2.View all stored vehicle records in an organized list


3.Search for vehicles by ID or name


4.Update existing vehicle information (driver, contact, route, type, etc.)


5.Delete transport records from the database


6.Persistent data storage using a .dat file


7.Fully terminal-based (CLI) interface


8.Beginner-friendly, easy-to-understand C program structure.


9.Automatically creates the data file if it doesn’t already exist.


10.Basic error handling for invalid input and missing files.



TECHNICAL REQUIREMENTS


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



FUNCTIONAL REQUIREMENTS


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



HOW TO RUN THE PROGRAM

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



SCREENSHOTS (Description)

(Replace with actual screenshots if needed)

1. Main Menu

Shows all operation options like Add, View, Search, Update, Delete.

<img width="377" height="133" alt="Screenshot 2025-11-20 152958" src="https://github.com/user-attachments/assets/482f8125-1900-4325-bcb6-81efb4a1bec3" />


2. Add New Vehicle

Form for entering vehicle information.

<img width="298" height="115" alt="Screenshot 2025-11-20 152340" src="https://github.com/user-attachments/assets/b8ca25fb-fcbc-454c-acb6-f9a2cab9d20c" />

3. View All Vehicles.

 Displays all vehicle, driver, route, and contact details.
 
 <img width="408" height="127" alt="Screenshot 2025-11-20 151946" src="https://github.com/user-attachments/assets/d1acae5d-6592-45db-855c-63070aea6e65" />

4. Search Vehicle

Search by Vehicle ID or Name.

<img width="259" height="139" alt="Screenshot 2025-11-20 152028" src="https://github.com/user-attachments/assets/5111b1d3-a147-4edb-ab3d-229a3b408b9d" />

5. Update Vehicle

Modify stored information.

<img width="304" height="108" alt="Screenshot 2025-11-20 152050" src="https://github.com/user-attachments/assets/a33c0384-fe02-475c-b94e-0d64af3db589" />

6. Exit.

   <img width="460" height="77" alt="Screenshot 2025-11-20 152116" src="https://github.com/user-attachments/assets/857391a6-9d7e-4078-bc42-887ffa3c8e39" />


