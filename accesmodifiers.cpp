class BankAccount {
    // public - accessible everywhere
    public String accountNumber;
    
    // private - accessible only within class
    private double balance;
    
    // protected - accessible in subclasses
    protected String accountType;
    
    // Public method to access private data
    public double getBalance() {
        return balance;
    }
}
