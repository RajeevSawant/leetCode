


char* URLify(char* address, int returnSize) {

	char* res = malloc(returnSize * sizeof(char));
	char* resPtr = res;
	int start = 0, write = 0;

	while (address[start] != '\0') {
		if (address[start] == ' ') {
			res[write++] = '%';
			res[write++] = '2';
			res[write++] = '0';
		}
		else {
			res[write++] = address[start];
		}
		start++;
	}

	return resPtr;
}