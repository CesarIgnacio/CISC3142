CC = g++

lab2:
	@echo "Running program Ex1.5"
	@cd Exercise2 && g++ ex1-5.cpp -o ex1-5 && ./ex1-5
	@echo "Running program Ex1.11"
	@cd Exercise2 && g++ ex1-11.cpp -o ex1-11 && ./ex1-11

