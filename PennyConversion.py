def convert_pennies(pennies):
    if not isinstance(pennies, int) or pennies < 0:
        raise ValueError("Please enter a non-negative integer value for pennies.")
    
    dollar = pennies // 100
    remaining_pennies = pennies % 100
    quarter = remaining_pennies // 25
    remaining_pennies = remaining_pennies % 25
    dimes = remaining_pennies // 10
    remaining_pennies = remaining_pennies % 10
    nickels = remaining_pennies // 5
    remaining_pennies = remaining_pennies % 5
    
    return dollar, quarter, dimes, nickels, remaining_pennies

def main():
    try:
        pennies = int(input("Enter Penny amount: "))
        dollar, quarter, dimes, nickels, remaining_pennies = convert_pennies(pennies)
        print(f"Your amount is: {dollar} dollars, {quarter} quarters, {dimes} dimes, {nickels} nickels, {remaining_pennies} pennies")
    except ValueError as e:
        print(e)

if __name__ == "__main__":
    main()

