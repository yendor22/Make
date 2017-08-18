VPATH = src include
CPPFLAGS = -I include

#TARGETS
count_words: counter.o lexer.o -lfl
count_words.o: counter.h
counter.o: counter.h lexer.h
lexer.o: lexer.h

#PATTERN RULES
%.o: %.c
	$(COMPILE.c) $(OUTPUT_OPTION) $<

%.c: %.l
	@$(RM) $A
	$(LEX.l) $< > $@

%: %.o
	$(LINK.o) $^ $(LOADLIBS) $(LDLIBS) -o $@

.PHONY: clean
clean:
	rm -f *.o
	rm -f lexer.c
	rm -f count_words

