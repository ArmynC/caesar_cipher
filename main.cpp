#include <iostream>
#include <string>

int main(){
    std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJLKMNOPQ RSTUVWXYZ0123456789!@$%^&*()-_+={}[]^:;<>?,./|~"};
    std::string encryptKey {"b 1o[*!y6Rqu&%j9ad4e.5fwx2|g8hi7)3y(0k-l+m=n$p;r<s'tu>vzEC]B,D}AF&GH_^JK{L[MN;O:P?Qc@STU~VWXY/ZI"};

    std::string message;
    std::cout << "Enter the message: ";
    std::getline(std::cin, message);

    // encryption
    for(size_t i{0}; i<message.length();i++){
        char character;
        character = message.at(i);

        size_t position = alphabet.find(character);

        if(position != std::string::npos){ // example character test: "
            message.at(i) = encryptKey.at(position);
        } else {
            message.at(i) = character;
        }
    }

    std::cout << "Encrypted message is:" << message;

    // decryption
    for(size_t i{0}; i<message.length();i++){
        char character;
        character = message.at(i);

        size_t position = encryptKey.find(character);

        if(position != std::string::npos){ 
            message.at(i) = alphabet.at(position);
        } else {
            message.at(i) = character;
        }
    }

    std::cout << "\nDecrypted (just a check..) message is: " << message;
}