#include <stdio.h>

struct SymbolDecoder {
    char symbol;
    int value;
};

int decodeSymbol(struct SymbolDecoder decoder[], int numSymbols, char symbolToDecode) {
    for (int i = 0; i < numSymbols; i++) {
        if (decoder[i].symbol == symbolToDecode) {
            return decoder[i].value;
        }
    }
    return -1;
}

int main() {
    struct SymbolDecoder decoder[10];
    int numSymbols;

    printf("Enter the number of symbols in the Magical Symbol Translator (max 10): ");
    scanf("%d", &numSymbols);

    if (numSymbols <= 0 || numSymbols > 10) {
        printf("Invalid number of symbols. Exiting program.\n");
        return 1;
    }

    for (int i = 0; i < numSymbols; i++) {
        printf("Mystical Symbol %d: ", i + 1);
        scanf(" %c", &decoder[i].symbol);
        printf("Numeric Value %d: ", i + 1);
        scanf("%d", &decoder[i].value);
    }

    char symbolToDecode;
    printf("Enter the mystical symbol to decode: ");
    scanf(" %c", &symbolToDecode);

    int numericValue = decodeSymbol(decoder, numSymbols, symbolToDecode);
    if (numericValue != -1) {
        printf("The numeric value of the mystical symbol '%c' is: %d.\n", symbolToDecode, numericValue);
    } else {
        printf("Symbol not found in the decoder.\n");
    }

    return 0;
}
