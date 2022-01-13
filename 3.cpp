// Given the string, check if it is a palindrome.
bool solution(string inputString) {
    int l = 0;
    int h = inputString.length()-1;
    int a = 0;
	for(int i = 0; i < (inputString.length() / 2); i++) 
		if(inputString[i] == inputString[h - i]) a++;
	if(a == (inputString.length() / 2)) return true;
	else return false;
}
