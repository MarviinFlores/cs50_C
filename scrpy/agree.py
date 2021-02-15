from cs50 import get_string

s = get_string ("do you Agree Y/N\n")

if s.lower()  in ["y", "yes"]:
    print("Agreed")
elif s.lower() in ["n","no"]:
    print("Not Agreed")
