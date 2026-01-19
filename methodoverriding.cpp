class Animal {
    void makeSound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {
    @Override  // Annotation (optional but recommended)
    void makeSound() {
        System.out.println("Dog barks");
    }
}

// Usage
Animal myAnimal = new Dog();
myAnimal.makeSound();  // Output: Dog barks