#include <iostream>

using namespace std;

//definidikan array dengan ukuran maksimum 20
int a[20];
int n;

//fungsi untuk menginputkan ukuran array
void read() {
	while (true) {
		cout << "Masukkan jumlah Element/Data array :";
		cin >> n;
		if (n <= 20)
			break;
		else
			cout << "\nArray maksimum 20 element/data.\n" << endl;
	}
	cout << endl;
	cout << "......................" << endl;
	cout << "Masukkan element Array" << endl;
	cout << "......................" << endl;

	//user inputs for the array
	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> a[i];
	}
}

void display() {
	//display the shorted array
	cout << "total number of data movements : " << (n - 1) << endl;
	cout << "......................" << endl;
	cout << "Insertion Shorted array elements" << endl;
	cout << "......................" << endl;

	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
}

void InsertionShortArry() {
	for (int i = 1; i < n; i++) {
		int temp = a[i];
		int j = i - 1;
		while ((j >= 0) && (a[j] > temp)) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}


int main() {

	read();
	InsertionShortArry();
	display();
	system("pause");
	return 0;
}
