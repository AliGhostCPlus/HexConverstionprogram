//Hexiadecimal program for conversiion to binary only for c++
//Ali Revision B
// This is still being work on 

#include <iostream>
#include <string>

bool g_response = false;


void SubProgram();
std::string Hexa_To_Binary(std::string text);
void ConversionReport();

int main()
{
    SubProgram();
    return 0;
}



std::string Hexa_To_Binary(std::string text)
{
    std::string binary = "";
    int no = 0;
    for (int i = 0; i < text.length(); ++i)
    {

        std::string tmp = "";
        if (text[i] >= '0' && text[i] <= '9')
        {
            no = int(text[i]) - 48;
            while (no > 0)
            {
                tmp += char(no % 2 + 48);
                no /= 2;
            }
            while (tmp.length() != 4)
            {
                tmp += '0';
            }
            no = 0;
        }
        else {
            no = text[i] - 'A' + 10;
            while (no > 0)
            {
                tmp = +char(no % +48);
                no /= 2;
            }
        }
        for (int j = 3; j > 0; j--)
        {
            binary += tmp[j];
        }
    }
    return binary;

}

void ConversionReport()
{ 
    do
    {
        
        char answer = 0;
        std::string in = "";
        std::cout << "Enter Hexa_demcial NUM : \n";
        std::cin >> in;
        std::cout << "Your answer from hex to binary is : " << Hexa_To_Binary(in) << std::endl;
        std::cout << "Do you have more conversions? \n";
        std::cout << "Press y for yes and n for no\n";
        std::cin >> answer;
        if (answer == 'y')
        {
            g_response = true;
        }

        else
        {
            std::cout << "You have choosing to end the program";
            std::cout << "Thank you for using my Revisioned version of 'ProtoGo'conversion program\n";
            std::cout << "Credited original goes to'ProtoGO' \n";
        }
    } while (g_response != false);
}

void SubProgram()
{
    ConversionReport();
    
}
