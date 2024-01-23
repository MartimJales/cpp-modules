#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		std::cout << numbers[i] << std::endl;
// 	}

//     delete [] mirror;//
//     return 0;
// }

int main() {
	// Teste de Construção Sem Parâmetros
	Array<int> emptyArray;
	if (emptyArray.size() == 0) {
		std::cout << "Empty Array: OK" << std::endl;
	} else {
		std::cout << "Empty Array: FAIL" << std::endl;
	}

	// Teste de Construção com Tamanho Especificado
	Array<int> initializedArray(10);
	bool sizeCheck = initializedArray.size() == 10;
	bool initCheck = true;
	for (unsigned int i = 0; i < initializedArray.size(); ++i) {
		if (initializedArray[i] != 0) {
			initCheck = false;
			break;
		}
	}
	if (sizeCheck && initCheck) {
		std::cout << "Size and Initialization: OK" << std::endl;
	} else {
		std::cout << "Size and Initialization: FAIL" << std::endl;
	}

	// Teste de Construção por Cópia e Independência das Arrays
	Array<int> originalArray(5);
	originalArray[2] = 50;
	Array<int> copiedArray = originalArray;
	copiedArray[2] = 100;
	if (originalArray[2] != copiedArray[2]) {
		std::cout << "Copy: OK" << std::endl;
	} else {
		std::cout << "Copy: FAIL" << std::endl;
	}

	// Teste do Operador de Atribuição e Independência das Arrays
	Array<int> arrayOne(5);
	Array<int> arrayTwo;
	arrayTwo = arrayOne;
	arrayTwo[2] = 100;
	if (arrayOne[2] != arrayTwo[2]) {
		std::cout << "Assignment: OK" << std::endl;
	} else {
		std::cout << "Assignment: FAIL" << std::endl;
	}

	// Teste de Exceção para Acesso Fora dos Limites
	Array<int> testArray(5);
	try {
		testArray[10] = 100; // Deve lançar uma exceção
		std::cout << "Out of Bounds: FAIL" << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Out of Bounds: OK" << std::endl;
	}

	// Teste da Função `size()`
	Array<int> arrayThree(7);
	if (arrayThree.size() == 7) {
		std::cout << "Size: OK" << std::endl;
	} else {
		std::cout << "Size: FAIL" << std::endl;
	}

	// Teste de Auto-atribuição
	Array<int> arrayFour(5);
	arrayFour = arrayFour;
	if (arrayFour.size() == 5) {
		std::cout << "Self-Assignment: OK" << std::endl;
	} else {
		std::cout << "Self-Assignment: FAIL" << std::endl;
	}

	return 0;
}
