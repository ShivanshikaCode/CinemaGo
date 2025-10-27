<h1><b>🎬 Cinema Ticket Booking System</b></h1>

**Language:** C++<br>
**Project Type:** Object-Oriented Programming (OOP)<br>
**Author:** Shivani (24/CSE/419) and Shivanshika Sahani (24/CSE/420)<br>
<h3 style="color: red;"><b>🧩 Project Overview </b></h3><hr>
The Cinema Ticket Booking System is a console-based application designed to simulate a real-world movie seat reservation process.
It implements multiple Object-Oriented Programming (OOP) principles such as abstraction, encapsulation, inheritance, polymorphism, dynamic binding, data hiding, and file handling to manage booking data efficiently.

The system allows users to:

<ul ><li>Choose movies and show timings</li>

<li>View seat availability by category (Platinum, Gold, Silver)</li>

<li>Reserve specific seats</li>

<li>Persist booking information through text files</li>

<li>Each session dynamically reads and writes data to maintain an updated record of reservations.</li></ul><br>

<h3 style="color: red;"><b>🧱 System Architecture</b></h3><hr>
The program is built around a hierarchical class structure, where the base class Seats provides generic functionality for seat management, and three derived classes extend this functionality for specific seat categories.

Seats (Base Class)

🔸 PlatinumSeats (Derived)

🔸 GoldSeats (Derived)

🔸 SilverSeats (Derived)


The main() function acts as the controller, managing user interactions and invoking appropriate class functions.

<h3 style="color: red;"><b>🧠 OOP Concepts Used (12 Concepts)</b></h3><hr>
Here’s a detailed breakdown of OOP principles applied in this project:

<h4><b>1. Class</b></h4>

Classes like Seats, PlatinumSeats, GoldSeats, and SilverSeats are used to encapsulate data and behavior related to seat management.

<h4><b>2. Object</b></h4>

Objects such as ps, gs, and ss are created to represent seat categories, enabling real-time seat operations.

<h4><b>3. Encapsulation</b></h4>

The Seat array (2D matrix) is declared private inside the Seats class to restrict direct access from outside, ensuring data protection and controlled modification through member functions.

<h4><b>4. Abstraction</b></h4>

The system hides complex implementation details like file reading/writing and seat layout logic from the user, exposing only intuitive menu options and methods.

<h4><b>5. Inheritance</b></h4>

The classes PlatinumSeats, GoldSeats, and SilverSeats inherit from the base class Seats, allowing reuse of functions like loadFromFile() and saveToFile() while providing their own version of getSeatStatus().

<h4><b>6. Polymorphism</b></h4>

Achieved through the virtual function getSeatStatus() and base class pointer Seats* s in main().

Enables runtime polymorphism - the correct version of getSeatStatus() is called depending on the object type (PlatinumSeats, GoldSeats, or SilverSeats).

<h4><b>7. Dynamic Binding</b></h4>

When the base class pointer (Seats* s) calls an overridden method (getSeatStatus()), the function is bound at runtime, demonstrating late binding.

<h4><b>8. Function Overriding</b></h4>

Each derived class overrides the getSeatStatus() function to provide different seat accessibility logic based on the category.

<h4><b>9. Data Hiding</b></h4>

The Seat matrix is hidden within the class and can only be accessed or modified using specific public member functions.

<h4><b>10. File Handling</b></h4>

Functions loadFromFile() and saveToFile() are used to persist seat booking data across sessions using .txt files.

Demonstrates how OOP integrates with file I/O for real-world applications.

<h4><b>11. Constructor</b></h4>

The constructor Seats() initializes all seats as available (1), automatically preparing the layout when an object is created.

<h4><b>12. Use of Pointers and Dynamic Polymorphism</b></h4>

The use of a base class pointer (Seats* s) allows the program to decide the appropriate seat category behavior dynamically at runtime.<br>

<h3 style="color: red;"><b>🧮 Program Flow</b></h3><hr>
<ol><li>User selects Movie</li>

<li> Chooses Show Timing</li>

<li> Picks a Seat Category (Platinum, Gold, Silver)</li>

<li> Seat layout is displayed </li>

<li> User selects a specific Row and Seat Number</li>

<li> System validates input, checks availability, and reserves seat if available</li>

<li> Updated data is saved in the corresponding .txt file</li></ol>

<h3 style="color: red;"><b>📁 File Handling Logic</b></h3><hr>
Each showtime and movie has a dedicated text file (e.g., movie1_1.txt for movie choice 1 and its first show of the day), which stores:

rowNumber seatNumber seatStatus


1 → Seat available

0 → Seat reserved

If the file doesn’t exist, it is auto-created during runtime, ensuring smooth operation even on first execution.

<h3 style="color: red;"><b>🧰 Key Functions</b></h3><hr>
<pre><b>Function           	Purpose<br></b>
<b>loadFromFile()</b>      Loads seat data from file into memory
<b>saveToFile()</b>	   Saves current seat layout back to file
<b>getSeatStatus()</b>     Returns seat availability (overridden in derived classes)
<b>reserveSeat()</b>	    Marks a seat as reserved
<b>display()</b>	        Visually prints the seat arrangement<br></pre>
<h3 style="color: red;"><b>🖥️ Console Interface</b></h3><hr>
Clean text-based interface using system("cls") and Sleep() for smooth user interaction.

Users can easily navigate between options, select movies, and view seat arrangements visually (x for reserved, - for available).

<h3 style="color: red;"><b>🧾 Advantages of This Design</b></h3><hr>
Modular and easily extendable for more movies or theatres

Realistic simulation with persistent seat data

Demonstrates multiple OOP principles clearly and practically

Beginner-friendly yet professionally structured

<h3 style="color: red;"><b>🚀 Possible Future Enhancements</b></h3><hr>
Add price differentiation between seat categories

Implement customer details and ticket receipts

Add admin panel for seat reset and movie scheduling

Replace text files with database integration (MySQL)

Build a GUI using Qt or web interface

<h3 style="color: red;"><b>🏁 Conclusion</b></h3><hr>
The Cinema Ticket Booking System successfully demonstrates real-world implementation of core OOP concepts in C++.
It effectively uses inheritance, polymorphism, abstraction, and encapsulation to create a modular, extensible, and maintainable program.
Through file persistence, it bridges theoretical OOP knowledge with practical application, making it a strong, academic-level project.
