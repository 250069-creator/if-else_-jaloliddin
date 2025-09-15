// #include <iostream>
// using namespace std;
// Problem 1
// int main() {
//     double n;
//     cout << "Enter a number: ";
//     if(!(cin >> n)) {
//         cerr << "Invalid input\n";
//         return 1;
//     }
//
//     if (n > 0) {
//         cout << "Positive number\n";
//     } else if (n < 0) {
//         cout << "Negative number\n";
//     } else {
//         cout << "Zero" "\n";
//     }

//     return 0;
// }

// Problem 2
//
// #include <iostream>
// using namespace std;
// int main () {
//     int num;
//     cin >> num;
//     if (num % 2 == 0) {
//         cout << " Even number" << endl;
//     }
//     else {
//         cout << " Odd number" << endl;
//         return 0;
//     }
// }

// problem 3
// # include <iostream>
// using namespace std;
// int main() {
//     int  a,b,c,max;
//     cin>>a>>b>>c;
//     if ( a>b) {
//         if (a>c)
//             max = a;
//     }
//     else {
//         if (b>c)
//             max = b;
//         else max = c;
//
//     }
//     return 0;
// }

// Problem 4
// #include <iostream>
// using namespace std;
//
// int main() {
//     double a, b, c;
//     cin >> a >> b >> c;
//     if (a > b && a > c) {
//         cerr << "Invalid input\n";
//         return 1;
//     }
//
//     double largest;
//     if (a >= b) {
//         if (a >= c) {
//             largest = a;
//         } else {
//             largest = c;
//         }
//     } else {
//         if (b >= c) {
//             largest = b;
//         } else {
//             largest = c;
//         }
//     }
//
//     cout << "Largest number is " << largest << endl;
//     return 0;
// }

// problem 5
// #include <iostream>
// using namespace std;
//
// int main() {
//     int year;
//     cin >> year;
//
//     if (year % 400 == 0) {
//         cout << "Leap year" << endl;
//     }
//     else if (year % 100 == 0) {
//         cout << "Not a leap year" << endl;
//     }
//     else if (year % 4 == 0) {
//         cout << "Leap year" << endl;
//     }
//     else {
//         cout << "Not a leap year" << endl;
//     }
//
//     return 0;
// }

// problem 6
// #include <iostream>
// using namespace std;
// int main() {
//     int marks;
//     cin >> marks;
//
//     if ( marks>= 50) {
//         cout << "Pass" << endl;
//     }
//     else {
//         cout << " Fail" << endl;
//     }
//     return 0;
// }

// problem 7
// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//
//     cin >> n;
//
//     if (n >= 0) {
//         if (n == 0) {
//             cout << "Zero" << endl;
//         }
//         else {
//             cout << "Positive number" << endl;
//         }
//     }
//     else {
//         cout << "Negative number" << endl;
//     }
//
//     return 0;
// }
// Problem 8
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int absValue;
//
//     if (n<0) {
//         absValue = -n;
//     } else {
//         absValue =n;
//     }
//     cout << absValue << endl;
//     return 0;
//
// }

// Problem 11
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     int largest;
//     if (a > b) {
//         if (a > c) {
//             largest = a;
//         } else {
//             largest = c;
//         }
//     } else {
//         if (b > c) {
//             largest = b;
//         } else {
//             largest = c;
//         }
//     }
//
//     cout << largest << " is the largest" << endl;

//     return 0;
// }

// problem 12
// #include <iostream>
// using namespace std;
// int main() {
//     int marks;
//     cin >> marks;
//
//     if (marks >= 90) {
//         cout << " Grade A" << endl;
//     } else if ( marks >= 80) {
//         cout << " Grade B" << endl;
//     } else if ( marks >= 70) {
//         cout << " Grade C" << endl;
//     } else if ( marks >= 60) {
//         cout << " Grade D" << endl;
//     } else {
//         cout << " Grade F" << endl;
//     }
//     return 0;
//
// }

// Problem 16
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//
//     if (n% 3 ==0 && n%5 == 0) {
//         cout << " Divisible by both" << endl;
//     } else {
//         cout << " Not divisible by both " << endl;
//     }
//     return 0;
// }

// problem 20
// #include <iostream>
// using namespace std;
// int main() {
//     int a,b;
//     cin >> a >> b;
//
//     if (b==0) {
//         cout << " we cant divide by zero" << endl;
//     } else {
//         int remainder = a%b;
//         cout << remainder << endl;
//     }
//     return 0;
// }
