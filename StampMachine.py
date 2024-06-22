def stamp_machine(dollars):
    FIRST_CLASS_COST = 47  # 47 cents per first-class stamp
    PENNY_COST = 1  # 1 cent per penny stamp
    
    total_cents = dollars * 100
    first_class_stamps = total_cents // FIRST_CLASS_COST
    remaining_cents = total_cents % FIRST_CLASS_COST
    penny_stamps = remaining_cents // PENNY_COST
    
    print(f"You have {first_class_stamps} First Class Stamps and {penny_stamps} Penny Stamps")
    print("Thank you!")

if __name__ == "__main__":
    dollars = float(input("Welcome to the Stamp Vending Machine!\nPlease Enter dollar amount: "))
    stamp_machine(dollars)
