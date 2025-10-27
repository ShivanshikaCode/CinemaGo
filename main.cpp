#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>
using namespace std;

const int rows = 5;
const int cols = 10;
string FILE_NAME = "movie1_1.txt";

class Seats {
private:
    int Seat[rows][cols];

public:
    Seats() {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                Seat[i][j] = 1;
    }

    int getSeat(int row, int col){
        return Seat[row - 1][col - 1];
    }

    virtual int getSeatStatus(int row, int seatNumber) {
        if (row < 1 || row > rows || seatNumber < 1 || seatNumber > cols)
            return -1;
        return Seat[rows - row + 1][seatNumber];
    }

    virtual void reserveSeat(int row, int seatNumber) {
        if (row < 1 || row > rows || seatNumber < 1 || seatNumber > cols)
            return;
        Seat[rows - row][seatNumber - 1] = 0;
    }

    void display() {
        cout << " ";
        for (int i = 0; i < cols; i++)
            cout << " " << i + 1;
        cout << endl;

        for (int i = 0; i < rows; i++) {
            cout << rows - i << " ";
            for (int j = 0; j < cols; j++) {
                if (Seat[i][j] == 1)
                    cout << "- ";
                else
                    cout << "x ";
            }
            cout << "|" << endl;
            if(i + 1 == 2 || i + 1 == rows - ((rows - 2) / 2)){
                cout << "  ";
                for(int k = 0; k < cols; k++){
                    cout << "  ";
                }
                cout << "|\n";
            }
        }
        cout << "__";
        for (int i = 0; i < cols; i++)
            cout << "__";
        cout << endl;
    }

    // Load seat data from file
    void loadFromFile(string fname) {
        ifstream file(fname);
        if (!file) {
            // If file doesn’t exist, create it with all seats available
            saveToFile(fname);
            return;
        }

        int rowNum, seatNum, seatStatus;
        while (file >> rowNum >> seatNum >> seatStatus) {
            if (rowNum >= 1 && rowNum <= rows && seatNum >= 1 && seatNum <= cols)
                Seat[rowNum - 1][seatNum - 1] = seatStatus;
        }
        file.close();
    }

    // Save seat data to file
    void saveToFile(string fname) {
        ofstream file(fname);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                file << i + 1 << " " << j + 1 << " " << Seat[i][j] << endl;
            }
        }
        file.close();
    }
};

class PlatinumSeats : public Seats{
    public:
    int getSeatStatus(int row, int seatNumber) override{
        if (row > rows || row < rows - 1 || seatNumber < 1 || seatNumber > cols)
            return -1;
        return getSeat(rows - row + 1, seatNumber);
    }
};

class GoldSeats : public Seats{
    public:
    int getSeatStatus(int row, int seatNumber) override{
        if (row > rows - 2 || row < 1 + (rows - 2) / 2 || seatNumber < 1 || seatNumber > cols)
            return -1;
        return getSeat(rows - row + 1, seatNumber);
    }
};

class SilverSeats : public Seats{
    public:
    int getSeatStatus(int row, int seatNumber) override{
        if (row < 1 || row > (rows - 2) / 2 || seatNumber < 1 || seatNumber > cols)
            return -1;
        return getSeat(rows - row + 1, seatNumber);
    }
};

int main() {
    Seats* s;
    bool exit = false;
    while (!exit) {
        system("cls");
        cout << "\nWelcome To Movie Ticket Reservation System\n";
        cout << "******************************************\n";
        cout << "1. Reserve A Ticket\n";
        cout << "2. Exit\n";
        cout << "Enter Your Choice: ";
        int val;
        cin >> val;
        if (val == 1) {
            cout << "\n_________________________\n\n";
            cout << "Enter your movie choice:\n";
            cout << "_________________________\n1. Thamma\n2. Kantara\n3. Ek Deewane ki Deewaniyat\nPress 0 to return.\n";
            int mchoice;
            cin >> mchoice;
            if(mchoice == 0){
                continue;
            }
            cout << "\n______________\n\n";
            cout << "Show timings:\n";
            cout << "______________\n1. 11:00 PM - 2:00 PM\n2. 2:00 PM - 5:00 PM\n3. 5:30 PM - 8:30 PM\nPress 0 to return.\n";
            int mtime;
            cin >> mtime;
            if(mtime == 0){
                continue;
            }
            switch(mchoice){
                case 1: switch(mtime){
                    case 1: FILE_NAME = "movie1_1.txt"; break;
                    case 2: FILE_NAME = "movie1_2.txt"; break;
                    case 3: FILE_NAME = "movie1_3.txt"; break;}
                    break;
                case 2: switch(mtime){
                    case 1: FILE_NAME = "movie2_1.txt"; break;
                    case 2: FILE_NAME = "movie2_2.txt"; break;
                    case 3: FILE_NAME = "movie2_3.txt"; break;} 
                    break;
                case 3: switch(mtime){
                    case 1: FILE_NAME = "movie3_1.txt"; break;
                    case 2: FILE_NAME = "movie3_2.txt"; break;
                    case 3: FILE_NAME = "movie3_3.txt"; break;}
                    break;
                default:
                    cout << "Invalid choice!\n";
                    continue;    
                }

            cout << "\n__________________________\n\n";
            cout << "Choose your seat category:\n";
            cout << "__________________________\n1. Platinum \n2. Gold \n3. Silver\nPress 0 to return.\n";
            int seatCat;
            cin >> seatCat;
            cout << "\n";
            if(seatCat == 0){
                continue;
            }

            int catRowsStart = 1;
            int catRowsEnd = rows;
            PlatinumSeats ps;
            GoldSeats gs;
            SilverSeats ss;
            switch(seatCat){
                case 1: ps.loadFromFile(FILE_NAME);
                        ps.display();
                        s = &ps;
                        catRowsStart =  rows - 1;
                        catRowsEnd = rows;
                        break;
                case 2: gs.loadFromFile(FILE_NAME);
                        gs.display();
                        s = &gs;
                        catRowsStart = 1 + (rows - 2) / 2;
                        catRowsEnd = rows - 2;
                        break;
                case 3: ss.loadFromFile(FILE_NAME);
                        ss.display();
                        s = &ss;
                        catRowsStart = 1;
                        catRowsEnd = (rows - 2) / 2;
                        break;  
                default: cout << "Invalid choice!\n";
                         continue;
            }
            book:
            int row, col;
            cout << "\nEnter Row (" << catRowsStart << " - " << catRowsEnd << "): ";
            cin >> row;
            cout << "Enter Seat Number (1 - " << cols << "): ";
            cin >> col;

            if(row == 0 ||col == 0){
                cout << "See you soon!\n";
                continue;
            }
            if (row < 1 || row > rows || col < 1 || col > cols) {
                cout << "Invalid Row or Seat Number!\n";
                Sleep(2000);
                goto book;
            }

            int seatStatus = s->getSeatStatus(row, col);
            if (seatStatus == 0) {
                cout << "Sorry, seat already reserved!\n";
                Sleep(2000);
                goto book;
            }
            else if(seatStatus == -1){
                cout << "Invalid seat or row input!\n";
                Sleep(2000);
                goto book;
            }

            s->reserveSeat(row, col);
            s->saveToFile(FILE_NAME);
            cout << "Seat Reserved Successfully (Row " << row << ", Seat " << col << ")\n";
            Sleep(2000);
        }
        else if (val == 2) {
            exit = true;
            cout << "Good Luck!\n";
            Sleep(2000);
        }
        else {
            cout << "Invalid Choice!\n";
            Sleep(2000);
        }
    }

    return 0;
}