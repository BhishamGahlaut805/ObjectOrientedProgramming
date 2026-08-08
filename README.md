# 🧑‍💻 Object-Oriented Programming (OOPs)

![OOP](https://img.shields.io/badge/OOP-Object%20Oriented%20Programming-6f42c1?style=for-the-badge)
![C++](https://img.shields.io/badge/C%2B%2B-Programming-00599C?style=for-the-badge\&logo=cplusplus\&logoColor=white)
![DSA](https://img.shields.io/badge/DSA-Interview%20Preparation-F7DF1E?style=for-the-badge)
![GitHub](https://img.shields.io/badge/Practice-GitHub-181717?style=for-the-badge\&logo=github\&logoColor=white)

> A structured repository for learning, practicing, and revising **Object-Oriented Programming (OOP)** concepts with a strong focus on **technical interviews, coding assessments, and software development fundamentals**.

---

## 📌 About

Object-Oriented Programming is one of the most important foundations of software development.

This repository contains examples and practice programs designed to understand how real-world entities can be represented using:

```text
Classes
   ↓
Objects
   ↓
Attributes + Methods
   ↓
Relationships
   ↓
Reusable & Maintainable Code
```

The repository is particularly useful for **SDE / SDE-1 placement preparation**, where OOP concepts are frequently discussed in technical interviews.

---

# 🧠 Core OOP Concepts

## 1. 🔒 Encapsulation

Wrapping data and the methods that operate on that data into a single unit.

```cpp
class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    double getBalance() {
        return balance;
    }
};
```

### Key idea

> **Data + Methods → Single Unit**

Benefits:

* 🔐 Data protection
* 🧩 Better organization
* 🛠️ Controlled access
* 📦 Maintainability

---

## 2. 👨‍👩‍👧 Inheritance

Inheritance allows one class to acquire properties and behavior from another class.

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking";
    }
};
```

```text
Animal
   │
   └── Dog
```

### Common types

* Single inheritance
* Multilevel inheritance
* Multiple inheritance
* Hierarchical inheritance
* Hybrid inheritance

---

## 3. 🎭 Polymorphism

Polymorphism means **"many forms."**

The same interface can behave differently depending on the object or context.

### Compile-time polymorphism

Examples:

```text
Function Overloading
Operator Overloading
```

### Runtime polymorphism

Example:

```text
Method Overriding
Virtual Functions
```

---

## 4. 🎨 Abstraction

Abstraction hides implementation details and exposes only the essential functionality.

Example:

```cpp
class Vehicle {
public:
    virtual void start() = 0;
};
```

The user knows:

```text
start()
```

without necessarily needing to know the internal implementation.

### Real-world examples

🚗 Car
🏧 ATM
📱 Mobile phone
💳 Payment system

---

# 🧱 Important OOP Building Blocks

| Concept              | Purpose                           |
| -------------------- | --------------------------------- |
| 🏗️ Class            | Blueprint for objects             |
| 📦 Object            | Instance of a class               |
| 🔐 Encapsulation     | Protect and organize data         |
| 👨‍👩‍👧 Inheritance | Reuse existing functionality      |
| 🎭 Polymorphism      | One interface, multiple behaviors |
| 🎨 Abstraction       | Hide implementation details       |
| 🔧 Constructor       | Initialize objects                |
| 🗑️ Destructor       | Clean up object resources         |
| 👁️ Access Modifiers | Control accessibility             |
| 🔄 Overloading       | Same name, different parameters   |
| 🔁 Overriding        | Redefine inherited behavior       |
| 🧬 Virtual Function  | Enable runtime polymorphism       |
| 📌 `this` Pointer    | Refer to current object           |
| 🧩 Static Members    | Shared class-level data           |

---

# 🔐 Access Modifiers

In C++, the major access modifiers are:

```text
        public
          │
          ↓
Accessible from anywhere

        private
          │
          ↓
Accessible within the class

       protected
          │
          ↓
Class + derived classes
```

| Modifier    | Class | Derived Class | Outside |
| ----------- | :---: | :-----------: | :-----: |
| `private`   |   ✅   |       ❌       |    ❌    |
| `protected` |   ✅   |       ✅       |    ❌    |
| `public`    |   ✅   |       ✅       |    ✅    |

---

# 🏗️ Constructors & Destructors

## Constructor

A constructor is automatically called when an object is created.

```cpp
class Student {
public:
    Student() {
        cout << "Constructor called";
    }
};
```

### Types commonly discussed in interviews

* Default constructor
* Parameterized constructor
* Copy constructor

---

## 🗑️ Destructor

A destructor is automatically called when an object is destroyed.

```cpp
class Student {
public:
    ~Student() {
        cout << "Destructor called";
    }
};
```

Important syntax:

```cpp
~ClassName();
```

---

# 🎭 Compile-Time vs Runtime Polymorphism

| Feature          | Compile Time         | Runtime              |
| ---------------- | -------------------- | -------------------- |
| Also called      | Static polymorphism  | Dynamic polymorphism |
| Common example   | Function overloading | Function overriding  |
| Binding          | Early binding        | Late binding         |
| Virtual function | ❌                    | ✅                    |
| Decision         | Compile time         | Runtime              |

---

# 🔄 Function Overloading

Same function name with different parameters.

```cpp
class Calculator {
public:

    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};
```

---

# 🔁 Function Overriding

A derived class provides its own implementation of a base-class method.

```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal sound";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark";
    }
};
```

---

# ⚡ Virtual Functions

Virtual functions enable **runtime polymorphism**.

```cpp
Animal* animal = new Dog();

animal->sound();
```

Because `sound()` is virtual, the `Dog` implementation is selected at runtime.

### Interview keyword

> **Late Binding / Dynamic Dispatch**

---

# 🧬 Inheritance Hierarchy

```text
                    Animal
                       │
          ┌────────────┼────────────┐
          ↓            ↓            ↓
         Dog          Cat          Cow
```

A common real-world model:

```text
Vehicle
   │
   ├── Car
   ├── Bike
   └── Truck
```

---

# 🧩 Composition vs Inheritance

An important design concept for interviews.

### Inheritance

Represents:

> **IS-A**

```text
Dog IS-A Animal
Car IS-A Vehicle
```

### Composition

Represents:

> **HAS-A**

```text
Car HAS-A Engine
House HAS-A Room
Computer HAS-A CPU
```

In many designs, **composition is preferred over deep inheritance hierarchies** because it can reduce coupling and improve flexibility.

---

# 🎯 OOP Interview Questions

Make sure you can answer these without memorizing definitions.

### 🟢 Beginner

* What is OOP?
* What is a class?
* What is an object?
* What are the four pillars of OOP?
* What is encapsulation?
* What is abstraction?
* What is inheritance?
* What is polymorphism?
* What is a constructor?
* What is a destructor?

### 🟡 Intermediate

* Difference between class and object?
* Difference between abstraction and encapsulation?
* Difference between overloading and overriding?
* What is multiple inheritance?
* What is a virtual function?
* What is a pure virtual function?
* What is an abstract class?
* What is a copy constructor?
* What is the `this` pointer?
* What are static members?

### 🔴 Advanced

* What is the diamond problem?
* How does virtual inheritance solve the diamond problem?
* What is dynamic binding?
* What is a vtable?
* Why should a base-class destructor sometimes be virtual?
* Composition vs inheritance?
* What is object slicing?
* Shallow copy vs deep copy?
* What are SOLID principles?
* How would you design a real-world system using OOP?

---

# 🏢 Real-World OOP Design Examples

Try implementing these as practice projects:

### 🏦 Banking System

```text
Bank
 │
 ├── Account
 │    ├── SavingsAccount
 │    └── CurrentAccount
 │
 └── Customer
```

Practice:

* Encapsulation
* Inheritance
* Polymorphism
* Constructors

---

### 🚗 Vehicle Management System

```text
Vehicle
 ├── Car
 ├── Bike
 └── Truck
```

Practice:

* Inheritance
* Method overriding
* Virtual functions
* Abstraction

---

### 🛒 Shopping System

```text
Product
   │
   ├── Electronics
   ├── Clothing
   └── Grocery

Customer
   │
   └── Cart
```

Practice:

* Composition
* Encapsulation
* Polymorphism
* Classes and objects

---

# 🧠 Learning Roadmap

Follow this order:

```text
1️⃣ Classes & Objects
       ↓
2️⃣ Constructors & Destructors
       ↓
3️⃣ Access Modifiers
       ↓
4️⃣ Encapsulation
       ↓
5️⃣ Inheritance
       ↓
6️⃣ Polymorphism
       ↓
7️⃣ Function Overloading
       ↓
8️⃣ Function Overriding
       ↓
9️⃣ Virtual Functions
       ↓
🔟 Abstraction
       ↓
1️⃣1️⃣ Composition
       ↓
1️⃣2️⃣ Copy Constructor
       ↓
1️⃣3️⃣ Shallow vs Deep Copy
       ↓
1️⃣4️⃣ SOLID Principles
       ↓
1️⃣5️⃣ Low-Level Design
```

---

# 📊 Placement Preparation Checklist

| Topic                  | Status |
| ---------------------- | :----: |
| Classes & Objects      |    ⬜   |
| Constructors           |    ⬜   |
| Destructors            |    ⬜   |
| Access Modifiers       |    ⬜   |
| Encapsulation          |    ⬜   |
| Inheritance            |    ⬜   |
| Polymorphism           |    ⬜   |
| Abstraction            |    ⬜   |
| Function Overloading   |    ⬜   |
| Function Overriding    |    ⬜   |
| Virtual Functions      |    ⬜   |
| Pure Virtual Functions |    ⬜   |
| Abstract Classes       |    ⬜   |
| Static Members         |    ⬜   |
| `this` Pointer         |    ⬜   |
| Copy Constructor       |    ⬜   |
| Shallow vs Deep Copy   |    ⬜   |
| Composition            |    ⬜   |
| SOLID Principles       |    ⬜   |
| LLD Basics             |    ⬜   |

---

# 💻 How to Practice

For every concept, follow this cycle:

```text
📖 Understand the concept
        ↓
✍️ Write a small example
        ↓
🧪 Run the program
        ↓
🐛 Introduce a mistake
        ↓
🔍 Debug it
        ↓
🗣️ Explain it without notes
        ↓
🎯 Solve an interview question
```

The most important step is:

> **Be able to explain the concept with your own example.**

---

# 🚀 Placement-Focused Goal

The ultimate goal is to move from:

```text
Syntax
   ↓
Concepts
   ↓
Implementation
   ↓
Debugging
   ↓
Design
   ↓
Interview Explanation
```

By the end of this repository, you should be comfortable answering:

> **"Explain OOP with a real-world example."**

and then implementing that example in code.

---

## 🛠️ Tech Stack

* 💻 C++
* 🧩 Object-Oriented Programming
* 🧠 Data Structures & Algorithms
* 🏗️ Low-Level Design fundamentals
* 🐙 Git & GitHub

---

## 📜 License

This project is licensed under the **Apache License 2.0**.

---

## ⭐ Keep Practicing

> **Strong OOP fundamentals make DSA, system design, and software development easier to understand.**

```text
Learn → Code → Debug → Explain → Design → Repeat 🔁


### ⭐ If this repository helps you with OOP preparation, consider giving it a star!
