def birthday_guessing_game():
    print("Is your birthday in Set1 = {1, 3, 5, 7}?")
    set1 = int(input("Enter 1 for Yes and 0 for No: "))

    print("Is your birthday in Set2 = {2, 3, 6, 7}?")
    set2 = int(input("Enter 1 for Yes and 0 for No: "))

    print("Is your birthday in Set3 = {4, 5, 6, 7}?")
    set3 = int(input("Enter 1 for Yes and 0 for No: "))

    print("Is your birthday in Set4 = {8, 9, 10, 11, 12, 13, 14, 15}?")
    set4 = int(input("Enter 1 for Yes and 0 for No: "))

    print("Is your birthday in Set5 = {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31}?")
    set5 = int(input("Enter 1 for Yes and 0 for No: "))

    birthday = set1 + set2 * 2 + set3 * 4 + set4 * 8 + set5 * 16

    print("Your birthday is", birthday)

if __name__ == "__main__":
    birthday_guessing_game()

