// Inheritance is a mechanism where a new class (child/subclass) derives properties and behavior from an existing class (parent/superclass).

// Benefits:
// Code Reusability: Avoid code duplication
// Method Overriding: Child can modify parent's behavior
// Hierarchical Classification: Represents real-world relationships

// Parent class
class Animal {
    void eat() {
       cout << "Animal is eating";
    }
}

// Child class inherits from Animal
class Dog extends Animal {
    void bark() {
        cout<< "Dog is barking";
    }
}

// Usage
Dog myDog = new Dog();
myDog.eat();   // Inherited from Animal
myDog.bark();  // Own method