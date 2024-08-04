# wasm-inspector

## Overview

This project provides a tool to inspect and visualize the structure of WebAssembly (WASM) modules.

## Setup

1. Install dependencies:
    ```bash
    sudo apt-get install git cmake build-essential
    ```

2. Clone and build the project:
    ```bash
    git clone <repository_url>
    cd wasm-inspector
    mkdir build
    cd build
    cmake ..
    make
    ```

## Usage

- Run the following command to inspect a WASM module:
    ```bash
    ./wasm_inspector <path_to_wasm_file>
    ```
- you can use ../test/sample.wasm path

## Web Visualization (Optional)

- Open `web/index.html` in a web browser.
- Upload a WASM file to visualize its structure.
