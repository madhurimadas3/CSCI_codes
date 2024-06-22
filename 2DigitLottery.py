import random

def generate_lottery():
    return random.randint(0, 99)

def get_user_guess():
    while True:
        try:
            guess = int(input("Enter your lottery pick (2 digits): "))
            if 0 <= guess <= 99:
                return guess
            else:
                print("Please enter a valid two-digit number between 00 and 99.")
        except ValueError:
            print("Invalid input. Please enter a numeric value.")

def extract_digits(number):
    return number // 10, number % 10

def check_guess(lottery, guess):
    lottery_digit1, lottery_digit2 = extract_digits(lottery)
    guess_digit1, guess_digit2 = extract_digits(guess)
    
    if guess == lottery:
        return "Exact match: you win $10,000"
    elif guess_digit2 == lottery_digit1 and guess_digit1 == lottery_digit2:
        return "Match all digits: you win $3,000"
    elif (guess_digit1 == lottery_digit1 or
          guess_digit1 == lottery_digit2 or
          guess_digit2 == lottery_digit1 or
          guess_digit2 == lottery_digit2):
        return "Match one digit: you win $1,000"
    else:
        return "Sorry, no match"

def main():
    lottery = generate_lottery()
    guess = get_user_guess()
    result = check_guess(lottery, guess)
    print(f"The lottery number is {lottery:02d}")
    print(result)

if __name__ == "__main__":
    main()
