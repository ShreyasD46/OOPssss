// Abstraction is hiding the implementation details and showing only the essential features to the user.
// Real-world Example:
// When you drive a car, you only use steering wheel, pedals, and gears. You don't need to know how the engine works internally.

// In Java, abstraction is achieved through:
// Abstract Classes (0-100% abstraction)
// Interfaces (100% abstraction)
// Benefits:
// Reduces complexity
// Hides implementation details
// Enhances security
// Supports code maintenance

// An abstract class is a class that cannot be instantiated and may contain abstract methods (methods without implementation).

// Key Features:
// Declared with abstract keyword
// Cannot create objects directly
// Can have abstract and non-abstract methods
// Can have constructors
// Can have instance variables
// abstract class Animal {
//     // Abstract method (no implementation)
//     abstract void makeSound();
    
//     // Concrete method (with implementation)
//     void sleep() {
//         System.out.println("Animal is sleeping");
//     }
// }

// class Dog extends Animal {
//     // Must implement abstract method
//     @Override
//     void makeSound() {
//         System.out.println("Dog barks");
//     }
// }

// // Usage
// // Animal a = new Animal();  // ERROR: Cannot instantiate
// Animal a = new Dog();  // OK: Can reference subclass
// a.makeSound();  // Output: Dog barks
// a.sleep();      // Output: Animal is sleeping