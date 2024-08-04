#ifndef WASM_PARSER_H
#define WASM_PARSER_H

#include <string>
#include <vector>

class WasmParser {
public:
    bool loadWasmFile(const std::string &filePath);
    void displayWasmStructure();

private:
    std::vector<uint8_t> wasmBytes;
};

#endif // WASM_PARSER_H
