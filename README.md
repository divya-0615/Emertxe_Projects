# Mini_Project_Maharashtrian_Kitchen

Built as a mini-project to practice **C programming concepts** such as `switch-case`, `do-while` loops, conditional statements, input validation, and restaurant billing logic.

# Aamchi Maharashtrian Kitchen – Restaurant Billing System

A simple console-based restaurant billing application developed in **C** that allows customers to order authentic Maharashtrian dishes, select quantities, and generate a final bill with GST calculation.

## Features

- Interactive menu featuring traditional Maharashtrian cuisine
- Menu divided into three categories:
  - Starters
  - Main Course
  - Desserts
- Order multiple food items in a single session
- Quantity validation (does not allow zero or negative values)
- Calculates subtotal automatically
- Adds 18% GST to the final bill
- Displays total number of items ordered
- Simple and user-friendly command-line interface
- Exit option available anytime before ordering

## Menu

### Starters
- Kothimbir Vadi
- Sabudana Vada
- Solkadhi

### Main Course
- Misal Pav
- Vada Pav
- Puran Poli
- Special Maharashtrian Thali

### Desserts
- Shrikhand
- Modak

---

## How It Works

1. The program displays the restaurant menu.
2. The user selects an item by entering its menu number.
3. The user enters the required quantity.
4. The selected item is added to the bill.
5. The user can continue ordering additional items.
6. When ordering is complete, the program generates the final bill showing:
   - Total items ordered
   - Subtotal
   - GST (18%)
   - Final payable amount

---

## C Programming Concepts Used

- `switch-case`
- `do-while` loop
- `if-else` statements
- Input validation
- Variables and arithmetic operations
- GST calculation
- Console-based user interaction

---

## Project Structure

```
Mini_Project_Maharashtrian_Kitchen/
│
├── maharashtrian_kitchen.c
├── README.md
```

---

## How to Compile and Run

### Compile

```bash
gcc maharashtrian_kitchen.c -o kitchen
```

### Run

```bash
./kitchen
```

*(For Windows using GCC/MinGW)*

```bash
gcc maharashtrian_kitchen.c -o kitchen.exe
kitchen.exe
```

---

## Learning Outcomes

This mini project helped in understanding:

- Menu-driven programming
- Billing system implementation
- Loop control using `do-while`
- Decision making using `switch-case`
- Input validation techniques
- Basic real-world application development in C

---

## Future Improvements

- Generate an item-wise bill instead of only the total.
- Save bills to a text file.
- Add customer name and contact details.
- Apply discount offers.
- Include multiple payment methods.
- Display order history.
- Improve the interface with better formatting and colors.

---

## Author

**Divya Ambadas Adam**

Electronics & Telecommunication Engineering  
Passionate about C Programming and Problem Solving.
