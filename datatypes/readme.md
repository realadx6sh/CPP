# Primitive Data Types and Their Ranges

> Note: The exact size of some data types may vary depending on the compiler and system architecture.  
> The values below are the most commonly used ranges on modern systems.

| Data Type            | Size (Bytes)  | Range                                                       |
| -------------------- | ------------- | ----------------------------------------------------------- |
| `bool`               | 1             | `true` or `false`                                           |
| `char`               | 1             | `-128` to `127`                                             |
| `unsigned char`      | 1             | `0` to `255`                                                |
| `signed char`        | 1             | `-128` to `127`                                             |
| `wchar_t`            | 2 or 4        | Platform dependent                                          |
| `short`              | 2             | `-32,768` to `32,767`                                       |
| `unsigned short`     | 2             | `0` to `65,535`                                             |
| `int`                | 4             | `-2,147,483,648` to `2,147,483,647`                         |
| `unsigned int`       | 4             | `0` to `4,294,967,295`                                      |
| `long`               | 4 or 8        | Platform dependent                                          |
| `unsigned long`      | 4 or 8        | Platform dependent                                          |
| `long long`          | 8             | `-9,223,372,036,854,775,808` to `9,223,372,036,854,775,807` |
| `unsigned long long` | 8             | `0` to `18,446,744,073,709,551,615`                         |
| `float`              | 4             | Approx. `±3.4 × 10^38`                                      |
| `double`             | 8             | Approx. `±1.7 × 10^308`                                     |
| `long double`        | 10, 12, or 16 | Approx. `±1.1 × 10^4932`                                    |
| `void`               | —             | No storage / no value                                       |

---

# Integer Type Summary

| Type Category | Signed      | Unsigned             |
| ------------- | ----------- | -------------------- |
| 8-bit         | `char`      | `unsigned char`      |
| 16-bit        | `short`     | `unsigned short`     |
| 32-bit        | `int`       | `unsigned int`       |
| 64-bit        | `long long` | `unsigned long long` |

---

# Example Program to Print Ranges

```cpp
#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    cout << "INT Min: " << INT_MIN << endl;
    cout << "INT Max: " << INT_MAX << endl;

    cout << "FLOAT Min: " << FLT_MIN << endl;
    cout << "FLOAT Max: " << FLT_MAX << endl;

    cout << "DOUBLE Min: " << DBL_MIN << endl;
    cout << "DOUBLE Max: " << DBL_MAX << endl;

    return 0;
}
```
