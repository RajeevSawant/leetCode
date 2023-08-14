

bool isPalindrome(char* str) {
	int val = 0, start = 0, c = 0;

	while (str[start] != '\0') {

		if ((str[start] >= 'a') && (str[start] <= 'z')) {
			c = str[start] - 'a';

			if ((val & (c << 1)) != 0) {
				return false;
			}
			else {
				val |= (c << 1);
			}
		}
		start++;
	}

	return true;
}