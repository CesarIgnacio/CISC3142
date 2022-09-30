CC = g++

lab2:
	@echo "Running program Ex1.5"
	@cd Exercise2 && g++ ex1-5.cpp -o ex1-5.exe && ./ex1-5
	@echo "Running program Ex1.11"
	@cd Exercise2 && g++ ex1-11.cpp -o ex1-11.exe && ./ex1-11


lab4:
	@echo "Running Lab4"
	@echo "Running Ex3.17"
	@cd Exercise4 && g++ ex3-17.cpp -o ex3-17.exe && ./ex3-17.exe
	@echo "Running Ex3.23"
	@cd Exercise4 && g++ ex3-23.cpp -o ex3-23.exe && ./ex3-23.exe
	@echo "Running Ex4.28"
	@cd Exercise4 && g++ ex4-28.cpp -o ex4-28.exe && ./ex4-28.exe
	@echo "Running Practice Problem 1"
	@cd Exercise4 && g++ inflation.cpp -o inflation.exe && ./inflation.exe
	@echo "Running Practice Problem 2"
	@cd Exercise4 && g++ nutrition.cpp -o nutrition.exe && ./nutrition.exe

