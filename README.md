<h1><b>🎬 Cinema Ticket Booking System </b></h1>
<h3><i><b>Project Report</b></i></h3>
<h2><b>Abstract</b></h2><hr>
The Cinema Ticket Booking System is a console-based C++ application designed to simulate the process of booking movie tickets. The system allows users to view seat availability, book tickets, and manage reservations efficiently. It demonstrates how object-oriented programming (OOP) concepts can be practically applied to develop a real-world system that involves data handling, modular design, and persistence using file operations.

The goal of this project is to simplify the ticket booking process and to maintain data consistency by reading and writing booking details into a text file, ensuring that the system preserves booking information between sessions.<br>

<h2><b>Objective</b></h2><hr>

The main objective of this project is to:

<ul><li>Implement the principles of Object-Oriented Programming (OOP) in a real-life application.</li>

<li>Enable users to book, cancel, and view seat reservations through an intuitive console interface.</li>

<li>Use file handling to achieve data persistence, ensuring bookings are not lost after the program terminates.</li>

<li>Strengthen understanding of core C++ concepts like classes, inheritance, polymorphism, encapsulation, and abstraction.</li></ul><br>

<h2><b>Scope of the Project</b></h2><hr>

This project focuses on a single-screen movie theatre with a fixed seating layout. It is capable of:

<ul><li>Displaying seat arrangements and their current status (booked or available).</li>

<li>Taking user input for booking specific seats.</li>

<li>Saving all booking details to a file for persistent storage.</li>

<li>Allowing future extension to include multiple movies, timings, and pricing categories.</li>

<li>Although the current version is console-based, the structure is modular and scalable enough to be converted into a GUI-based or web-based booking system in the future.</li></ul><br>

<h2><b>Tools and Technologies Used</b></h2><hr>

**Programming Language:** C++

**Compiler:** GCC / MinGW

**IDE:** Visual Studio Code

**Operating System:** Windows

**Key Concepts:** OOP, File Handling, Data Persistence

<h2><b>System Design</b></h2><hr>
<h3>⚙️ System Overview</h3>

The system is based on a modular design approach:

🔸**Seat Management Module:** Handles seat initialization, display, and booking updates.

🔸**File Handling Module:** Reads and writes booking data to a text file (movie1_1.txt), ensuring persistence.

🔸**Main Control Module:** Provides user interaction, displays menus, and manages program flow.

<h3>⚙️ Data Flow</h3>

<ul><li>When the program starts, it reads the current seat data from a file.</li>

<li>The user selects seats they want to book.</li>

<li>The system updates the seat status (0 for available, 1 for booked).</li>

<li>Updated data is written back to the text file.</li>

<li>The file is reloaded upon next execution - ensuring persistent seat status.</li>

<h2><b>Features</b></h2><hr>

<ul><li>Interactive text-based user interface.</li>

<li>Real-time seat status display.</li>

<li>Booking and cancellation functionality.</li>

<li>Automatic data persistence through text files.</li>

<li>Error handling for invalid inputs.</li>

<li>Modular class design for easy code maintenance and extension.</li></ul>

<h2><b>OOP Concepts Implemented</b></h2><hr>

This project effectively demonstrates several Object-Oriented Programming principles:

Concept  	Implementation Description
Class & Object	The Seats class encapsulates data and functions related to seat management.
Encapsulation	Seat data (rows, columns, and seat status) is kept private and accessed via public member functions.
Abstraction	Users interact only with simplified functions like bookSeat() and displaySeats(), hiding internal details.
Inheritance	Different seat types (like Platinum, Gold, Silver) can be derived from a base class for future scalability.
Polymorphism	Virtual functions can be used for displaying seat information differently in derived classes.
Constructor & Destructor	Constructors initialize seat data; destructors ensure cleanup when objects go out of scope.
File Handling (Persistence)	Data is saved and retrieved using file I/O to preserve booking details between sessions.
Function Overloading / Overriding	Methods can be redefined for specific seat categories.
Dynamic Binding	Achieved when virtual functions are called through base class pointers.
8. Implementation Details

Seat Representation: A 2D array (Seat[rows][cols]) represents seat positions.

File Operations:

Input: Load seat data from movie1_1.txt.

Output: Update file after each booking.

Menu System: Allows users to view and book seats interactively.

Error Control: Prevents double booking and invalid seat selections.

9. Sample Output
Welcome to Cinema Ticket Booking System

1. View Seats
2. Book a Seat
3. Exit

Enter your choice: 1

Current Seat Status:
O - Available   X - Booked

Row 1: O O X O O O O O X O
Row 2: X O O O X O O X O O

10. Conclusion

The Cinema Ticket Booking System demonstrates how Object-Oriented Programming can be applied to solve real-world problems through modular, scalable, and maintainable code.
The project successfully integrates file handling for persistence, reinforcing practical concepts of data storage and retrieval.

It not only enhances understanding of C++ OOP principles but also provides a solid foundation for extending the system to a multi-screen, multi-user, or GUI-based version.

11. Future Enhancements

Add user authentication (admin and customer).

Include multiple movies and showtimes.

Implement price calculation and digital receipts.

Develop a graphical or web interface for better usability.

12. References

E. Balagurusamy — Object-Oriented Programming with C++

cppreference.com

GeeksforGeeks C++ Tutorials

cplusplus.com Documentation

Would you like me to now format this version with professional Markdown + some minimal CSS-style HTML (fonts, color headings) so you can paste it directly into your GitHub README.md and it looks visually appealing too?
