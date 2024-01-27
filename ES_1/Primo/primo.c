 int primo(unsigned int val) {
	 for (unsigned int i = 2; i < val - 1; i++) {
		 if (val % i == 0) {
			 return 0;
		 }
	 }
	 return 1;
}