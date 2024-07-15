CXX = g++
CXXFLAGS = -lglfw -lGL

# Target for the executable (use a pattern)
TARGET = Application

# How to compile the application
all: $(TARGET)

$(TARGET): Application.cpp*  # Use wildcard for Application.cpp*
	$(CXX) $(CXXFLAGS) $(filter %.cpp, $^) -o $(TARGET)

# Target to run the application (with automatic rebuild if needed)
run: $(TARGET)
	./$(TARGET) || rm -f $(TARGET)

