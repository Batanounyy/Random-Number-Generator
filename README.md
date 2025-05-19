# **C++ Random Number Generator Class** 🎲  

A lightweight, header-only C++ class for generating high-quality random numbers in any range. Perfect for games, simulations, cryptography (non-secure), and more!  

![C++](https://img.shields.io/badge/C++-17%2F20-blue?logo=cplusplus)  
![License](https://img.shields.io/badge/License-MIT-green)  
![Header-only](https://img.shields.io/badge/Header--only-Yes-brightgreen)  
---

## **Documentation**  
- [`Notion Documentation for the Project`](https://www.notion.so/RandomGenerator-hpp-Documentation-1f8da1083c448006be69f93bbc596219?pvs=25)
- [`Notion Docs. for all Projects`](https://www.notion.so/Batanouny-Codes-1f8da1083c4480e1b5e7c6632b54b259)
---

## **Features** ✨  
✔ **Easy integration** – Just include one header file!  
✔ **Time-based seeding** – Auto-seeded with `std::random_device` and `std::time`.  
✔ **Modern C++** – Uses `<random>` (no legacy `rand()`).  
✔ **Thread-safe** – Safe for multi-threaded applications.  

---

## **Installation** 📦  

### **Method 1: Single-file include**  
1. Download [`RandomGenerator.hpp`](RandomGenerator.hpp)  
2. Place it in your project’s include directory.  
3. Include it:  
   ```cpp
   #include "RandomGenerator.hpp"
   ```
---

## **Usage** 🚀  

### **Basic Example**  
```cpp
#include "RandomGenerator.hpp"
#include <iostream>

int main() {
    RandomGenerator rng; // Auto-seeded

    int dice_roll = rng.getInt(1, 6); // Roll a die
    float percentage = rng.getFloat(0.0f, 100.0f); 
    bool coin_flip = rng.getBool(); // 50% true/false

    std::cout << "Dice: " << dice_roll 
              << ", Percentage: " << percentage
              << ", Coin: " << (coin_flip ? "Heads" : "Tails") << std::endl;
    return 0;
}
```

### **Advanced Features**  
```cpp
// Manually reseed (e.g., for deterministic testing)
rng.reseed(42); 

// Generate a random double in [0, 1)
double prob = rng.getDouble(0.0, 1.0); 
```

---

## **API Reference** 📖  

| Method | Description | Example |
|--------|------------|---------|
| `getInt(min, max)` | Random `int` in **[min, max]** | `rng.getInt(1, 10)` → `7` |
| `getFloat(min, max)` | Random `float` in **[min, max]** | `rng.getFloat(0.0f, 1.0f)` → `0.618f` |
| `getDouble(min, max)` | Random `double` in **[min, max]** | `rng.getDouble(0.0, 1.0)` → `0.141592` |
| `getBool()` | Random `true`/`false` (50% chance) | `rng.getBool()` → `true` |
| `reseed(seed)` | Manually set the seed | `rng.reseed(std::time(nullptr))` |

---

## **Why Not `rand()`?** ❌  
Legacy `rand()` has:  
- **Poor randomness** (predictable patterns)  
- **Modulo bias** (`rand() % N` is non-uniform)  
- **No thread safety**  

This class uses C++11’s `<random>` for:  
- **Better distributions** (uniform, normal, etc.)  
- **Faster performance**  
- **Thread-safe design**  

---

## **License** 📜  
MIT © Abdelrahman ElBatanouny – Free for personal and commercial use.  

---

**Happy coding!** 💻  

--- 
