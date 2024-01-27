#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdlib.h>

char* extract_number(const char* message) {

	size_t len = 0;
	size_t counter = 0;
	while (message[len] != 0) {
		len++;
	}

	char* ris = calloc(len, sizeof(char));

	if (*(strstr(&message[1], "uno") + 3) == " ") {
		strcat(ris, "1");
	}
	if (strstr(message, " due ")) {
		strcat(ris, "2");
	}
	if (strstr(message, " tre ")) {
		strcat(ris, "3");
	}
	if (strstr(message, " quattro ")) {
		strcat(ris, "4");
	}
	if (strstr(message, " cinque ")) {
		strcat(ris, "5");
	}
	if (strstr(message, " sei ")) {
		strcat(ris, "6");
	}
	if (strstr(message, " sette ")) {
		strcat(ris, "7");
	}
	if (strstr(message, " otto ")) {
		strcat(ris, "8");
	}
	if (strstr(message, " nove ")) {
		strcat(ris, "9");
	}



	//for (size_t i = 0; i < len; i++) {
	//	while (message[i] == ' ') {
	//		i++;
	//	}
	//	if (message[i] != ' ') {
	//		if (strstr(message + i, "uno") != NULL) {
	//			if (message[i] == 'u') {
	//				counter++;
	//				i += 3;
	//				strcat(ris, "1");
	//			}
	//			
	//		}
	//	}
	//	if (message[i] != ' ') {
	//		if (strstr(message + i, "due") != NULL) {
	//			if (message[i + 1] == ' ') {
	//				counter++;
	//				i += 3;
	//				strcat(ris, "2");
	//			}

	//		}
	//	}
	//	if (message[i] != ' ') {
	//		if (strstr(message + i, "tre") != NULL) {
	//			if (message[i + 1] == ' ') {
	//				counter++;
	//				i += 3;
	//				strcat(ris, "3");
	//			}

	//		}
	//	}
	//	if (message[i] != ' ') {
	//		if (strstr(message + i, "quattro") != NULL) {
	//			if (message[i + 1] == ' ') {
	//				counter++;
	//				i += 7;
	//				strcat(ris, "4");
	//			}

	//		}
	//	}
	//	if (message[i] != ' ') {
	//		if (strstr(message + i, "cinque") != NULL) {
	//			if (message[i + 1] == ' ') {
	//				counter++;
	//				i += 6;
	//				strcat(ris, "5");
	//			}

	//		}
	//	}
	//	if (message[i] != ' ') {
	//		if (strstr(message + i, "sei") != NULL) {
	//			if (message[i + 1] == ' ') {
	//				counter++;
	//				i += 3;
	//				strcat(ris, "6");
	//			}

	//		}
	//	}
	//	if (message[i] != ' ') {
	//		if (strstr(message + i, "sette") != NULL) {
	//			if (message[i + 1] == ' ') {
	//				counter++;
	//				i += 5;
	//				strcat(ris, "7");
	//			}

	//		}
	//	}
	//	if (message[i] != ' ') {
	//		if (strstr(message + i, "otto") != NULL) {
	//			if (message[i + 1] == ' ') {
	//				counter++;
	//				i += 4;
	//				strcat(ris, "8");
	//			}

	//		}
	//	}
	//	if (message[i] != ' ') {
	//		if (strstr(message + i, "nove") != NULL) {
	//			if (message[i + 1] == ' ') {
	//				counter++;
	//				i += 4;
	//				strcat(ris, "9");
	//			}

	//		}
	//	}
	//}

	return ris;
}