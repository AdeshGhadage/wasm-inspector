#include <iostream>
#include "wasm_parser.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: wasm_inspector /home/adesh/Documents/LFX mentorship/wasm-inspector/my_module.wasm" << std::endl;
        return 1;
    }

    std::string wasmFilePath = argv[1];
    WasmParser parser;
    if (parser.loadWasmFile(wasmFilePath)) {
        parser.displayWasmStructure();
    } else {
        std::cerr << "Failed to load WASM file." << std::endl;
        return 1;
    }

    return 0;
}
