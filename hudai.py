import os

database = {}

def display_menu():
    print("Menu:")
    print("1. Update the database")
    print("2. See the database")
    print("3. Enter a new certificate")
    print("4. Exit")

def update_database():
    while True:
        print("\nCategories:")
        for index, category in enumerate(database, start=1):
            print(f"{index}. {category}")

        category_choice = input("Enter the category number (0 to go back): ")

        if category_choice == '0':
            return

        try:
            category_choice = int(category_choice)
            selected_category = list(database.keys())[category_choice - 1]
            certificates = database[selected_category]

            while True:
                print("\nCertificates in", selected_category)
                for index, certificate in enumerate(certificates, start=1):
                    print(f"{index}. Certificate Name: {certificate['name']}, Main Copies: {certificate['main_copies']}, Single Photocopies: {certificate['single_photocopies']}, >=3 Photocopies: {certificate['>=3_photocopies']}")

                certificate_choice = input("Enter the certificate number (0 to go back): ")

                if certificate_choice == '0':
                    break

                try:
                    certificate_choice = int(certificate_choice)
                    selected_certificate = certificates[certificate_choice - 1]

                    print("\nCertificate Details:")
                    print(f"Certificate Name: {selected_certificate['name']}")
                    print(f"Main Copies: {selected_certificate['main_copies']}")
                    print(f"Single Photocopies: {selected_certificate['single_photocopies']}")
                    print(f">=3 Photocopies: {selected_certificate['>=3_photocopies']}")

                    print("\nOptions:")
                    print("1. Edit the name")
                    print("2. Edit the number of main copies")
                    print("3. Edit the number of single photocopies")
                    print("4. Edit the number of >= 3 photocopies")
                    print("5. Back to certificates menu")

                    edit_choice = input("Enter your choice: ")

                    if edit_choice == '1':
                        new_name = input("Enter the new name: ")
                        selected_certificate['name'] = new_name
                    elif edit_choice == '2':
                        new_main_copies = int(input("Enter the new number of main copies: "))
                        selected_certificate['main_copies'] = new_main_copies
                    elif edit_choice == '3':
                        new_single_photocopies = int(input("Enter the new number of single photocopies: "))
                        selected_certificate['single_photocopies'] = new_single_photocopies
                    elif edit_choice == '4':
                        new_3_plus_photocopies = int(input("Enter the new number of >= 3 photocopies: "))
                        selected_certificate['>=3_photocopies'] = new_3_plus_photocopies
                    elif edit_choice == '5':
                        continue
                    else:
                        print("Invalid choice. Please try again.")

                except (ValueError, IndexError):
                    print("Invalid certificate number. Please try again.")

        except (ValueError, IndexError):
            print("Invalid category number. Please try again.")

def see_database():
    while True:
        print("\nCategories:")
        for index, category in enumerate(database, start=1):
            print(f"{index}. {category}")

        category_choice = input("Enter the category number (0 to go back): ")

        if category_choice == '0':
            break

        try:
            category_choice = int(category_choice)
            selected_category = list(database.keys())[category_choice - 1]
            certificates = database[selected_category]

            print("\nCertificates in", selected_category)
            for index, certificate in enumerate(certificates, start=1):
                print(f"{index}. Certificate Name: {certificate['name']}\n, Main Copies: {certificate['main_copies']}\n, Single Photocopies: {certificate['single_photocopies']}\n, >=3 Photocopies: {certificate['>=3_photocopies']}\n")

        except (ValueError, IndexError):
            print("Invalid category number. Please try again.")

def enter_new_certificate():
    category = input("Enter the category for the new certificate: ")
    certificate_name = input("Enter the certificate name: ")
    main_copies = int(input("Enter the number of main copies: "))
    single_photocopies = int(input("Enter the number of single photocopies: "))
    three_plus_photocopies = int(input("Enter the number of >= 3 photocopies: "))

    new_certificate = {
        "name": certificate_name,
        "main_copies": main_copies,
        "single_photocopies": single_photocopies,
        ">=3_photocopies": three_plus_photocopies
    }

    if category not in database:
        database[category] = []

    database[category].append(new_certificate)
    print("New certificate added successfully.")

def main():
    while True:
        display_menu()

        choice = input("Enter your choice: ")

        if choice == '1':
            update_database()
        elif choice == '2':
            see_database()
        elif choice == '3':
            enter_new_certificate()
        elif choice == '4':
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
