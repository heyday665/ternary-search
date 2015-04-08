clean:
	@rm -rf *.gch
	@rm -rf source
	@rm -rf a.out

test_clang:
	@make clean
	clang++ -Wall -Wextra tsearch.h test.cpp

good_clang:
	@make clean
	clang++ -Wall -Wextra tsearch.h good.cpp

prod_clang:
	@make clean
	clang++ -Wall -Wextra tsearch.h main.cpp

test_gcc:
	@make clean
	g++ tsearch.h test.cpp

good_gcc:
	@make clean
	g++ tsearch.h good.cpp

prod_gcc:
	@make clean
	g++ tsearch.h main.cpp
