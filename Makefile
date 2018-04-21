.PHONY : clean
main : jindu.c
	gcc $^ -o  $@
clean:
	rm  main
