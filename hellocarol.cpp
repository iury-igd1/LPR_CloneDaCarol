#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");

    cout << "\033[1;34m***************************************************\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;32m*   \033[1;33m Oii Carol! Tudo bem?               \033[1;32m          *\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;32m*   \033[1;36mClonei seu repositório!                       \033[1;32m*\033[0m\n";
    cout << "\033[1;32m*   \033[1;36mAceita meu request aí ta                      \033[1;32m*\033[0m\n";
    cout << "\033[1;32m*                                                 *\033[0m\n";
    cout << "\033[1;34m***************************************************\033[0m\n";

    return 0;
}
