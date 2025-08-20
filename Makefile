# Makefile for C Programming Project

# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
INCLUDE_DIR = include
LIB_DIR = lib
SRC_DIR = src
BUILD_DIR = build

# Create build directory if it doesn't exist
$(shell mkdir -p $(BUILD_DIR))

# Default target
all: hello_world variables_demo input_output_demo array_basics simple_functions

# Basic programs
hello_world: $(SRC_DIR)/basics/hello_world.c
	$(CC) $(CFLAGS) $< -o $(BUILD_DIR)/$@

variables_demo: $(SRC_DIR)/basics/variables_demo.c
	$(CC) $(CFLAGS) $< -o $(BUILD_DIR)/$@

input_output_demo: $(SRC_DIR)/basics/input_output_demo.c
	$(CC) $(CFLAGS) $< -o $(BUILD_DIR)/$@

array_basics: $(SRC_DIR)/arrays/array_basics.c
	$(CC) $(CFLAGS) $< -o $(BUILD_DIR)/$@

simple_functions: $(SRC_DIR)/functions/simple_functions.c
	$(CC) $(CFLAGS) $< -o $(BUILD_DIR)/$@

# Challenge compilation helper
challenge-%:
	@if [ -f challenges/$*/$(FILE).c ]; then \
		$(CC) $(CFLAGS) -I$(INCLUDE_DIR) challenges/$*/$(FILE).c -o $(BUILD_DIR)/$(FILE); \
		echo "Compiled challenges/$*/$(FILE).c to $(BUILD_DIR)/$(FILE)"; \
	else \
		echo "File challenges/$*/$(FILE).c not found"; \
	fi

# Utility targets
clean:
	rm -rf $(BUILD_DIR)/*

clean-all:
	rm -rf $(BUILD_DIR)

rebuild: clean all

test: all
	@echo "Running basic tests..."
	@echo "Testing hello_world:"
	@./$(BUILD_DIR)/hello_world
	@echo "\nTesting variables_demo:"
	@./$(BUILD_DIR)/variables_demo

help:
	@echo "Available targets:"
	@echo "  all              - Build all example programs"
	@echo "  hello_world      - Build hello world program"
	@echo "  variables_demo   - Build variables demonstration"
	@echo "  input_output_demo - Build input/output demonstration"
	@echo "  array_basics     - Build array basics example"
	@echo "  simple_functions - Build simple functions example"
	@echo "  challenge-TOPIC  - Build challenge file (use: make challenge-arrays FILE=filename)"
	@echo "  clean            - Remove compiled programs"
	@echo "  clean-all        - Remove build directory"
	@echo "  rebuild          - Clean and build all"
	@echo "  test             - Run basic tests"
	@echo "  help             - Show this help message"
	@echo ""
	@echo "Examples:"
	@echo "  make hello_world"
	@echo "  make challenge-arrays FILE=arrays_01"
	@echo "  make clean"

# Prevent make from treating these as files
.PHONY: all clean clean-all rebuild test help challenge-%
