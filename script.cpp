#include <algorithm> // For random_shuffle
#include <iostream>  // For cout and cin
#include <string>    // For string operations
using namespace std;

// Function to generate a random password of given length
string Generate_random_password(int length){
    int no_of_shuffles_to_password = rand() % 50; // No. of times, we will do shuffles to password before displaying
    int no_of_shuffles_to_all_character = rand() % 50; // No. of times, we will do shuffles to password before displaying

    string password = ""; // Initialize the password as an empty string
    string numbers = "0123456789"; // Digits
    string lower_case = "abcdefghijklmnopqrstuvwxyz"; // Lowercase letters
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Uppercase letters
    string special_characters = "!@#$%^&*()_+-=/?.>,<\'\";:{}[]"; // Special characters
    string all_characters = numbers + lower_case + upper_case + special_characters; // Concatenate all character sets

    while(no_of_shuffles_to_all_character--){
        // Shuffle the password to ensure randomness
        random_shuffle(all_characters.begin(), all_characters.end());
        
    }
    // Loop to generate each character of the password
    for(int i = 0; i < length; i++){
        // Append a random character from all_characters to the password
        password += all_characters[rand() % all_characters.length()];
    }
    while(no_of_shuffles_to_password--){
        // Shuffle the password to ensure randomness
        random_shuffle(password.begin(), password.end());
    }

    return password; // Return the generated password
}

int main(){
    string user_input; // Variable to store user's response
    int password_length; // Variable to store desired password length
    
    // Ask the user if they want to generate a random password
    cout << "Do you want to generate a random password?" << endl;
    cin >> user_input; // Get the user's response

    // Check if the user wants to generate a password
    if(user_input == "yes" || user_input == "Yes" || user_input == "y" || user_input == "Y"){
        // Ask the user for the desired password length
        cout << "How long do you want your password to be?" << endl;
        cin >> password_length; // Get the password length from the user

        // Generate and print the random password
        cout << Generate_random_password(password_length) << endl;
    }
    else{
        // If the user does not want to generate a password, print "Goodbye"
        cout << "Goodbye" << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
