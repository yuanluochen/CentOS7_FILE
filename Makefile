ProcBar:Main.o ProcBar.o
		@gcc $^ -o $@

%.o:%.c
		@gcc -c $<

.PHONY:run
run:
		@./ProcBar

.PHONY:clean
clean:
		@rm -f *.o ProcBar


