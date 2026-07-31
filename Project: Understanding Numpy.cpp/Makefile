# Build system for the NumCpp learning notes.
#
# Usage:
#   make                normal build of every notes/*.cpp -> build/<name>
#   make run-01_arrays_and_dtypes    build (if needed) and run a single example
#   make list           list every buildable example name
#   make clean          remove build/

CXX      := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra
NUMCPP   := third_party/NumCpp/include

SRC_DIR  := notes
BUILD_DIR:= build

SOURCES  := $(wildcard $(SRC_DIR)/*.cpp)
TARGETS  := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%,$(SOURCES))

.PHONY: all clean list

all: $(TARGETS)

$(BUILD_DIR)/%: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I $(NUMCPP) $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# make run-<name> builds notes/<name>.cpp and immediately executes it.
run-%: $(BUILD_DIR)/%
	./$(BUILD_DIR)/$*

list:
	@ls $(SRC_DIR) | sed 's/\.cpp$$//'

clean:
	rm -rf $(BUILD_DIR)
