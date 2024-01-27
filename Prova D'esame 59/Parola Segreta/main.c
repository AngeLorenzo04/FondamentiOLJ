extern char* extract_number(const char* message);

int main(void) {
	char s[] = "uno dei tuoi amici ha festeggiato due diciottesimi a settembre";
	char* ris = extract_number(s);
	return 0;
}