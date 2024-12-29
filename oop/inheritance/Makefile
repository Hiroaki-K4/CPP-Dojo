SRCS := main.cpp
LDFLAGS := -lstdc++
NAME := inheritance
CXX := gcc

all: $(NAME)

$(NAME): $(SRCS)
	$(CXX) $(SRCS) $(LDFLAGS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY: all clean re
