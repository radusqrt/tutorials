#include <iostream>
#include <cstring>

class CTextBlock {
public:
    CTextBlock() {
        pText = new char[10];
        strcpy(pText, "WOW");
    }

    ~CTextBlock() {
        delete[] pText;
    }

    std::size_t length() const {
        if (!lengthIsValid) {
            // textLength and lengthIsValid cand be modified because
            // they are "mutable"
            textLength = std::strlen(pText);
            lengthIsValid = true;
        }

        return textLength;
    }

private:
    char *pText;
    mutable std::size_t textLength;
    mutable bool lengthIsValid;
};

int main() {
    CTextBlock ctb;
    std::cout << ctb.length() << std::endl;
    return 0;
}