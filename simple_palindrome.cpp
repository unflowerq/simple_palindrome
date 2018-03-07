int main()
{
	bool palindrome_flag = true;

	string input_str = "";
	
	cin >> input_str;

	int reverse_index = input_str.length() - 1;

	for (int i = 0; i < input_str.length()/2; i++)
	{
		if (input_str[i] != input_str[reverse_index])
			palindrome_flag = false;

		reverse_index--;
	}

	if (palindrome_flag)
		cout << "It's Palindrome" << endl;
	else
		cout << "It's not Palindrome" << endl;

	return 0;
}