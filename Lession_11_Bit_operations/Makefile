CC = gcc

CFLAGS   = -Wall -Werror  -std=c11

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SOURCES  := $(wildcard $(SRCDIR)/*.c)

OBJECTS  := $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)


$(BINDIR)/project.out: $(OBJECTS)
	$(CC) -o $@ $(CFLAGS) $(OBJECTS)

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c 
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJDIR)/*.o $(BINDIR)/*
run:
	$(BINDIR)/project