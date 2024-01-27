extern char* concatena(const char* prima, const char* seconda);

int main(void) {
	char s1[] = "Nicola è ";
	char s2[] = "Gay";
	
	char* nicola = concatena(s1, s2);

	free(nicola);
	return 0;
}