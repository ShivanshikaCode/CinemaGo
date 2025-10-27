<h1><b>🎬 Cinema Ticket Booking System </b></h1>
<h3><i><b>Project Report by Shivani(24/CSE/419) and Shivanshika Sahani(24/CSE/420)</b></i></h3>
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

<h3><b>1. Class</b></h3>

A class acts as a blueprint that defines attributes and functions for real-world entities.
In this project, several classes were used such as Seats, Movie, and Booking.

The Seats class manages seat arrangement and booking status.

The Movie class stores details like movie name, timing, and ticket price.

The Booking class handles the process of selecting a movie, displaying seat availability, booking, and generating tickets.
This modular structure allows clean separation of functionalities and reusability.

<h3><b>2. Object</b></h3>

Objects are instances of classes that carry their own data and perform actions.
In the project, objects were created from classes like Seats and Booking to represent different shows or movies.
For example, separate Seats objects were used for different screens or movies, each maintaining its own seat matrix and booking data. This allowed multiple shows to run independently without data overlap.

<h3><b>3. Encapsulation</b></h3>

Encapsulation bundles data and functions into a single unit and hides sensitive data from external access.
In this project, attributes like the 2D seat matrix were declared private inside the Seats class.
Public member functions such as bookSeat() and cancelSeat() were used to access and modify seat data safely.
This prevented any direct manipulation of seat availability from outside the class, maintaining data consistency.

<h3><b>4. Abstraction</b></h3>

Abstraction hides internal implementation and only exposes essential operations to the user.
The user interacts through simple menu-driven functions — like viewing available seats or booking tickets — without knowing the internal logic of file handling or seat management.
For example, when the user selects a seat, the program internally checks its availability, updates the file, and refreshes the layout, but the user only sees a clean interface.

<h3><b>5. Inheritance</b></h3>

Inheritance allows a class to acquire properties and behaviors of another class.
In this system, inheritance was used to extend base class functionality.
For instance, a VIPSeats class can inherit from Seats to add premium pricing and better seat types while still using the existing booking and display logic.
This demonstrates reusability and scalability — new seat categories or booking types can easily be added without rewriting the base logic.

<h3><b>6. Polymorphism</b></h3>

Polymorphism allows a function or method to behave differently based on the object that calls it.
In this project, virtual functions were introduced where the base class defined a general interface, and derived classes overrode specific behaviors.
For example, a function to display seat arrangements could show different seat layouts or pricing rules depending on whether it was called by a normal or VIP class.

<h3><b>7. Constructor</b></h3>

Constructors initialize class objects automatically, while destructors release resources when they are no longer needed.
In this project:

Constructors were used to initialize seat matrices to zero (empty seats) and to load data from .txt files when the program started.


<h3><b>8. Data Hiding</b></h3>

Data hiding ensures that crucial data members cannot be accessed or modified directly from outside the class.
For example, seat availability and booking records were private and could only be modified using defined functions like updateSeat() or checkAvailability().
This protected the data from unauthorized modification and kept the program secure and stable.

<h3><b>9. Message Passing</b></h3>

Objects communicate by calling each other’s functions, which is known as message passing.
In the booking process, the Booking class interacts with the Seats class by calling its methods to check availability or mark seats as booked.
Similarly, the Movie class communicates with Booking to provide movie details and pricing.
This inter-object communication made the system interactive and cohesive.

<h3><b>10. Modularity</b></h3>

Modularity divides the program into independent components, each handling a specific task.
In this system, each class was responsible for a distinct module — seat management, file handling, booking management, and movie details.
This made the project more organized, easier to debug, and simpler to expand (for example, adding new features like payment integration or multiple screens).

<h3><b>11. File Handling and Persistence</b></h3>

Although not a core OOP concept, persistence through file handling is crucial for real-world applications.
The program used text files (.txt) to store seat availability, booking records, and user details.
Whenever a booking was made or canceled, the updated data was written back to the file.
This ensured data persistence, meaning the booking details remained even after the program was closed and reopened.

<h3><b>12. Dynamic Memory and User Interaction</b></h3>

Dynamic user inputs were handled efficiently through function calls and menu-driven programming.
The user could choose movies, select seats, or cancel bookings dynamically, and the classes handled these inputs at runtime.
This use of dynamic behavior complements the principles of polymorphism and abstraction.<br>

<h2><b>Implementation Details</b></h2><hr>

**Seat Representation:** A 2D array (Seat[rows][cols]) represents seat positions.

*File Operations*-

**Input:** Load seat data from text file (e.g movie1_1.txt for booking tickets for 1st show of 1st movie in the menu).

**Output:** Update file after each booking.

**Menu System:** Allows users to view and book seats interactively.

**Error Control:** Prevents double booking and invalid seat selections.<br>

<h2><b>Future Enhancements</b></h2><hr>

🔸Add user authentication (admin and customer).

🔸Include multiple movies and showtimes.

🔸Implement price calculation and digital receipts.

🔸Develop a graphical or web interface for better usability.

<h2><b>Conclusion</b></h2><hr>

The Cinema Ticket Booking System demonstrates how Object-Oriented Programming can be applied to solve real-world problems through modular, scalable, and maintainable code.
The project successfully integrates file handling for persistence, reinforcing practical concepts of data storage and retrieval.

It not only enhances understanding of C++ OOP principles but also provides a solid foundation for extending the system to a multi-screen, multi-user, or GUI-based version.

<h2><b>References</b></h2><hr>

🔸E. Balagurusamy — Object-Oriented Programming with C++

🔸cppreference.com

🔸GeeksforGeeks C++ Tutorials

🔸cplusplus.com Documentation

