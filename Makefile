############################################
# Makefile for the project "MacroDebugger" #
#										   #
# - - - -  Created by Michele Dusi - - - - #
############################################

# Executable name file
OUTPUT = debugger_test

# Directories
SRCDIR = ./src
BINDIR = ./bin
INCDIR = ./include
OBJDIR = ./obj

# Compilation parameters
CC = g++
CFLAGS=-I$(INCDIR) -g -std=c++2a

# Names list for the compilation files
SOURCES := $(shell find $(SRCDIR) -name '*.cpp')					# Sources ".cpp"
HEADERS := $(shell find $(INCDIR) -name '*.hpp')					# Headers ".hpp"
OBJECTS := $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))	# Objects ".o"

# Compiling of sources into obj files
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

# Compiling and linking of the final executale file
$(BINDIR)/$(OUTPUT): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^


# Cleaning of the compilation auxiliary files + of the executable
# 	Usage: "make clean"
.PHONY: clean
clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(BINDIR)/*
