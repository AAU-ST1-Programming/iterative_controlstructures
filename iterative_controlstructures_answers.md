# Iterative Control Structures - Answers

*Note: Code solutions are provided in the `files/svar/` directory. This file contains explanations, PBL answers, and references to the solution files.*

---

## Answer: Hello For-loop

**Solution file:** `files/svar/hello_for_loop_answer.c`

**Expected Output:**
```
Tal 0
Tal 4
Tal 8
...
Tal 96
```
*(Note: Original solution increments by 4, printing every 4th number from 0 to 96)*

**PBL Answer:**
Hvis startværdien ændres til 1 og betingelsen til `i <= 100`:
- Talene 1, 5, 9, ..., 97 bliver udskrevet (start ved 1, inkrementer med 4, stop ved 97)
- 0 bliver ikke inkluderet fordi loopet starter ved 1
- 100 bliver ikke inkluderet fordi den næste iteration ville være 101 som overskrider betingelsen

---

## Answer: While Loop

**Solution file:** `files/svar/loops1_answer.c`

**Expected Output:**
```
value of a: 10
value of a: 11
...
value of a: 20
```

**Answers to questions:**
- Første værdi: **10**
- Sidste værdi: **20**

**PBL Answer:**
Countdown fra 20 til 10:
```c
#include <stdio.h>
int main() {
    int a = 20;
    while (a >= 10) {
        printf("value of a: %d\n", a);
        a--;
    }
    return 0;
}
```
Output: value of a: 20, value of a: 19, ..., value of a: 10

---

## Answer: itr1

**Solution file:** `files/svar/itr1_svar.c`

**Expected Output:**
```
i:5
i:4
i:3
i:2
i:1
i:0
i:-1
i:-2
i:-3
i:-4
i:-5
```

**PBL Answer:**
Hvis startværdien ændres til 10 med `i >= -5`:
- Output: i:10, i:9, i:8, i:7, i:6, i:5, i:4, i:3, i:2, i:1, i:0, i:-1, i:-2, i:-3, i:-4, i:-5
- Der printes 16 tal i stedet for 11

---

## Answer: itr2

**Solution file:** `files/svar/itr2_svar.c`

**Expected Output:**
```
0
2
4
6
8
10
```

**PBL Answer:**
Print ulige tal i stedet:
```c
// Using modulo
for (int i = 0; i <= 10; i++) {
    if (i % 2 != 0) {
        printf("%i\n", i);
    }
}

// Without modulo
for (int i = 1; i <= 10; i += 2) {
    printf("%i\n", i);
}
```
Output: 1, 3, 5, 7, 9

---

## Answer: esp32_1

**Solution file:** `files/svar/esp32_1_og_2/esp32_1_og_2.ino` (setup section)

**Expected Serial Monitor Output:**
```
Print Once: 
```
*(Note: Original file has commented-out loop in setup. Uncomment lines 8-11 to get: 0 2 4 6 8 10)*

**PBL Answer:**
Print hver tredje værdi fra 0 til 20:
```cpp
void setup() {
  Serial.begin(115200);
  for (int i = 0; i <= 20; i += 3) {
    Serial.println(i);
    delay(100);
  }
}
```
Output: 0, 3, 6, 9, 12, 15, 18

---

## Answer: esp32_2

**Solution file:** `files/svar/esp32_1_og_2/esp32_1_og_2.ino` (loop section)

**Expected Serial Monitor Output:**
```
Prints every 1 sec: 0 2 4 6 8 10 
Prints every 1 sec: 0 2 4 6 8 10 
... (repeats every second)
```

**PBL Answer:**
Flytter `Serial.begin()` ind i loop() er en dårlig idé fordi:
1. **Performance impact:** `Serial.begin()` initialiserer hardware-serialporten, hvilket er en ressourcekrævende operation
2. **Unødvendig gentagelse:** Porten er allerede initialiseret - geninitialisering er unødvendig
3. **Potentielle fejl:** Nogle mikrocontrollere kan have problemer med at geninitialisere serialporten gentagne gange
4. **Baud rate ændringer:** Hvis baud rate ændres i loop(), kan det forårsage kommunikationsfejl

---

## Answer: loops2

**Solution file:** `files/svar/loops2_answer.c` or `files/svar/primes_answer.c`

**Expected Output:**
```
2 is prime.
3 is prime.
5 is prime.
7 is prime.
...
97 is prime.
```

**Opgave b Answer:**
When i = 23, the j-loop runs **21 times** (j = 2, 3, 4, ..., 22).

**PBL Answer:**
To print primes up to 200, change the outer loop condition in either file:
```c
for (i = 2; i <= 200; i++) {
    // rest of code remains the same
}
```

---

## Answer: Loops3

**Solution file:** `files/svar/loops3_answer.c`

**Expected Interaction:**
```
Tryk paa enten y/q: y
... hej med dig.
Tryk paa enten y/q: Y
... hej med dig.
Tryk paa enten y/q: q
... Farvel med dig.
```
*(Note: Uses do-while loop and different prompt text than specified)*

**PBL Answer:**
Add help command 'h':
```c
#include <stdio.h>

int main() {
    char c;
    
    do {
        printf("Tryk paa enten y/q/h: ");
        scanf(" %c", &c);
        
        switch (c) {
            case 'q':
            case 'Q':
                printf("... Farvel med dig.\n");
                break;
            case 'y':
            case 'Y':
                printf("... hej med dig.\n");
                break;
            case 'h':
            case 'H':
                printf("Available commands:\n");
                printf("  y - Say hello\n");
                printf("  q - Quit\n");
                printf("  h - Show help\n");
                break;
            default:
                printf("... Hvad vil du egentlig?\n");
        }
    } while (c != 'q' && c != 'Q');
    
    return 0;
}
```

---

## File References

All answer files are located in: `files/svar/`

- Hello For-loop: `hello_for_loop_answer.c`
- While Loop: `loops1_answer.c`
- itr1: `itr1_svar.c`
- itr2: `itr2_svar.c`
- esp32_1: `esp32_1_og_2/esp32_1_og_2.ino` (setup section)
- esp32_2: `esp32_1_og_2/esp32_1_og_2.ino` (loop section)
- loops2: `loops2_answer.c` or `primes_answer.c`
- Loops3: `loops3_answer.c`
