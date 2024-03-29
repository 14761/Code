#include <iostream>

// Exercise #1////////////////////////////////////////////////////

// class Geeks {
//     public:
//         std::string geekName;
// };

// int main()
// {
//     Geeks myGeek;
//     myGeek.geekName = "GeeksForGeeks";
//     std::cout << "Geekname is: " << myGeek.geekName;

//     return 0;
// }

// Exercise #2//////////////////////////////////////////////////////////////////

// struct point {
//     int x;
//     int y;
// };

// int main() {
//     point points[2];

//     points[0].x = 1;
//     points[0].y = 2;

//     points[1].x = 84;
//     points[1].y = 5;

//     for (int i = 0; i < 2; ++i) {
//         std::cout << "Point " << i << ": (" << points[i].x << ", " << points[i].y << ")" << std::endl;
//     }

//     return 0;
// }

// Exercise #3///////////////////////////////////////////////////////

// union variables {
//     int x, y;
// };

// int main()
// {
//     union variables myVariables;
//     myVariables.x = 26;
//     std::cout << myVariables.y << std::endl;
//     return 0;
// }

// Exercise #4///////////////////////////////////////

// enum realMadridPlayers {
//     none, Courtois, Carvajal, Militao, Alaba, Bellingham, Nacho, Vinicius, Kross, 
//     nox, Modric, Rodrygo, Camavinga, Lunin, Joselu, Valverde, no, Vazquez, Tchouameni, 
//     Ceballos, Garcia, Brahim, Rudiger, Mendy, Guler, Kepa
// }myPlayer;

// int main()
// {
//     // realMadridPlayers myPlayer;
//     myPlayer = Valverde;
//     std::cout << "my player is: "<< myPlayer << std::endl;
// }

// Exercise #5/////////////////////////////////////////////////////

// struct person {
//     std::string name;
//     int salary;
// };

// int main() {
//     typedef person employee;
//     employee emp1;
//     emp1.name = "Rafael";
//     emp1.salary = 50000;
//     std::cout << emp1.name << "'s salary: " << emp1.salary;

//     return 0;
// }